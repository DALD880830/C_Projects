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
    printf("Unidad 3 Actividad 1\n\n");
    printf("Arbol que almacene la siguiente expresion matematica 1 * ((3 ^ 4) + 2) \n\n");
	insertar(1);
    insertar("*");
    insertar(3);
	insertar("^");
    insertar(4);
    insertar("+");
    insertar(2);
    printf("Impresion InOrder: \n");
    printInOrder(raiz);
    borrar(raiz);
    printf("\n\n");
    printf("Impresion despues de borrar: \n");
    printInOrder(raiz);
    printf("\n\n");
    
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
        struct nodo *anterior, *aux;
        anterior = NULL;
        aux = raiz;
        while (aux != NULL)
        {
            anterior = aux;
            if (x < aux->dato)
                aux = aux->izq;
            else
                aux = aux->der;
        }
        if (x < anterior->dato)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void printInOrder(struct nodo *aux)
{
    if (aux != NULL)
    {
        printInOrder(aux->izq);
        printf("%i  ",aux->dato);
        printInOrder(aux->der);
    }
}

void borrar(struct nodo *aux)
{
    if (aux != NULL)
    {
        borrar(aux->izq);
        borrar(aux->der);
        free(aux);
    }
}

