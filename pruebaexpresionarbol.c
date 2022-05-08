#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
   int dato;
   struct nodo *derecho;
   struct nodo *izquierdo;
} Arbol;

Arbol *raiz=NULL;
void inserta(int entero);
void InOrder(struct nodo *ptr);
int isEmpty();

int main()
{
	Arbol *raiz=NULL;
	inserta(3);
	inserta(4);
	inserta(2);
	printf("Impresion InOrden: ");
    InOrder(raiz);
	
	return 0;
}

void inserta(int entero)
{
	Arbol *hoja;
	Arbol *ptr=NULL;
	int bandera=1;
	
	hoja=(Arbol *)malloc(sizeof(Arbol));
	hoja->izquierdo=NULL;
	hoja->derecho=NULL;
	hoja->dato=entero;
	
	if(isEmpty())
		{
			ptr=raiz;
			while(bandera)
				{
					if(ptr->dato >= entero)
					{
						if(ptr->izquierdo==NULL)
						{
							ptr->izquierdo=hoja;
							bandera=0;
						}
						else
							ptr=ptr->izquierdo;
					}
					else
						if(ptr->derecho == NULL)
						{
							ptr->derecho=hoja;
							bandera=0;
						}
						else
							ptr=ptr->derecho;
				}
		}
		else
			raiz=hoja;
}

int isEmpty(){
	if(raiz==NULL)
	return 1;
		else
			return 0;
}

void InOrder(struct nodo *ptr)
{
    if (ptr != NULL)
    {
        InOrder(ptr->izquierdo);
        printf("%i-",ptr->dato);
        InOrder(ptr->derecho);
    }
}
