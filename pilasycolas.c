#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodo{
	char nombres[20];
	struct nodo* siguiente;
}nodo;

nodo* primer = NULL;
nodo* ultimo = NULL;

void push();
void pop();
void enqueue();
void dequeue();


int main(){
	
	int num;
	
	printf("EJERCICIO UNIDAD 2 ACTIVIDAD 3\n");
	
	printf("\nELIGE ENTRE LA ESTRUCTURA PILA O LA ESTRUCTURA COLA\n");
	printf("\nPara PILA digite 1\nPara COLA digite 2\n\n");
	scanf("%d", &num);
	
	if(num==1){
		printf("\nINGRESA 4 NOMBRES\n");
		printf("No.1 "); push();
		printf("No.2 "); push();
		printf("No.3 "); push();
		printf("No.4 "); push();
		printf("SE RETIRAN LOS NOMBRES DE LA PILA");
		pop();
		pop();
		pop();
		pop();
		pop();
	}
	if(num==2){
		printf("\nINGRESA 4 NOMBRES\n");
		printf("No.1 "); enqueue();
		printf("No.2 "); enqueue();
		printf("No.3 "); enqueue();
		printf("No.4 "); enqueue();
		printf("SE RETIRAN LOS NOMBRES DE LA COLA");
		dequeue();
		dequeue();
		dequeue();
		dequeue();
		dequeue();
	}else{
		printf(" ");
	}
	
	
	return 0;
}

void push(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
	printf("Nombre: \n");
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

void enqueue(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
	printf("Nombre: \n");
	gets(nuevo->nombres);
	if(primer==NULL){
		primer=nuevo;
		primer->siguiente = NULL;
		ultimo=nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
}

void dequeue(){
	nodo* actual = (nodo*) malloc(sizeof(nodo));
	actual = primer;
	if(primer != NULL){
		primer=actual->siguiente;
		printf("\nSe atiende a: %s",actual);
		}
		else{
			printf("\nLa cola esta vacia\n");
		}
	}
