#include<stdio.h>
#include<stdlib.h>

struct nodo {
    int dato;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *raiz=NULL;

int main()
{
    insertar(1);
    insertar("*");
    insertar("^");
    insertar(3);
    insertar(4);
    insertar("+");
    insertar(2);
    printf("Impresion InOrder: \n");
    printInOrder(raiz);
    borrar(raiz);
    printf("\n");
    printf("Impresion InOrder: \n");
    printInOrder(raiz);
    printf("\n");
    return 0;
}

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        struct nodo *anterior, *recorrido;
        anterior = NULL;
        recorrido = raiz;
        while (recorrido != NULL)
        {
            anterior = recorrido;
            if (x < recorrido->dato)
                recorrido = recorrido->izq;
            else
                recorrido = recorrido->der;
        }
        if (x < anterior->dato)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}


void printInOrder(struct nodo *recorrido)
{
    if (recorrido != NULL)
    {
        printInOrder(recorrido->izq);
        printf("%i\n",recorrido->dato);
        printInOrder(recorrido->der);
    }
}


void borrar(struct nodo *recorrido)
{
    if (recorrido != NULL)
    {
        borrar(recorrido->izq);
        borrar(recorrido->der);
        free(recorrido);
    }
}

void PostOrder(struct nodo *aux)
{
    if (aux != NULL)
    {
        PostOrder(aux->izq);
        PostOrder(aux->der);
        printf("%i-",aux->dato);
    }
}
