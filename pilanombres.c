#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodo{
	char nombres[20];
	struct nodo* siguiente;
}nodo;

nodo* primer = NULL;

void push();
void pop();

int main(){
	printf("EJERCICIO DE PILA UNIDAD 2 ACTIVIDAD 1\n");
	
	printf("\nExtaer 1 nombre\n");
	pop();
	
	printf("\nInsertar 4 nombres\n");
	push();
	push();
	push();
	push();
	
	printf("\nExtraer 2 nombres");
	pop();
	pop();
	
	printf("\nExtraer 3 nombres");
	pop();
	pop();
	pop();
	return 0;
}

void push(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
	printf("Nombre: ");
	gets(nuevo->nombres);
	nuevo->siguiente = primer;
	primer=nuevo;
}

void pop(){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primer;
	if(primer != NULL){
		primer=actual->siguiente;
		printf("\nAl quitar el ultimo nombre quedamos en: %s",actual);
		}
		else{
			printf("\nLa pila esta vacia\n");
		}
	}
