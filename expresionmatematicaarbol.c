#include <stdio.h>
#include <stdlib.h>

struct nodo {
   int dato;
   struct nodo *padre;
   struct nodo *derecho;
   struct nodo *izquierdo;
};

struct nodo *crearnodo(struct nodo *padre, int dato);
void insertar(struct nodo *arbol, int dato);


int main()
{
	struct nodo *arbol;
	arbol= crearnodo(NULL, 40);
	insertar(arbol, 10);
	insertar(arbol, 50);
	return 0;
}

struct nodo *crearnodo(struct nodo *padre, int dato)
{
	struct nodo *n = calloc(sizeof(struct nodo),1);
	n->padre= padre;
	n->dato= dato;
	return n;
}

void insertar(struct nodo *arbol, int dato)
{
	struct nodo *aux, *temp;
	int derecho=0;
	if(arbol!=NULL)
	{
		aux=arbol;
		while(aux!=NULL)
		temp=aux;
		{
			if(dato>aux->dato)
			{
			aux=aux->derecho;
			derecho=1;
			}
			else
				{
				aux=aux->izquierdo;
				derecho=0;	
			}
		}
		aux= crearnodo(temp, dato);
		if(derecho==1)
		{
			printf("Insertando %i del lado derecho de %i\n", dato, temp->dato);
			temp->derecho=aux;
		}
		else
			{
			printf("Insertando %i del lado izquierdo de %i\n", dato, temp->dato);
			temp->izquierdo=aux;
			}
	}
	else
		{
			printf("No hay arbol\n");
		}
}
