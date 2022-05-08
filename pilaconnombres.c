#include <stdio.h>

typedef struct nodo{
	char nombres[20];
	struct nodo* siguiente;
}nodo;

nodo* primer = NULL;

void pushnodo();
void poppila();

int main(){
	void pushnodo();
	void pushnodo();
	void pushnodo();
	void pushnodo();
	void poppila();
	void poppila();
	void poppila();
	void poppila();
	void poppila();
	return 0;
}

void pushnodo(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
	printf("Ingresa un nombre");
	scanf("%c", &nuevo->nombres);
	nuevo->siguiente = primer;
	primer=nuevo;
}

void poppila(){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primer;
	if(primer != NULL){
		actual->nombres;
		actual = actual->siguiente;
		}
		else{
			printf("\nLa pila esta vacia\n");
		}
	}
