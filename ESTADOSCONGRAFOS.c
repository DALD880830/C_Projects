#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	char dato;
	struct Nodo *siguiente;
	struct Edge *arista;
};

struct Edge{
	struct Nodo *vertice;
	struct Edge *siguiente;
};

struct Nodo *inicio=NULL;

int grafo[100][100];
void init();
void addNodo();
void addEdge();

int main(){
	
	printf("EJERCICIO DE GRAFOS UNIDAD 3 ACTIVIDAD 2\n\n");
	
	init();

	addNodo(1, "BajaCaliforniaSur");
	addEdge(1, 2);
	addNodo(2, "BajaCalifornia");
	addEdge(2, 3);
	addNodo(3, "Sonora");
	addEdge(3, 4);
	addEdge(3, 5);
	addNodo(4, "Sinaloa");
	addEdge(4, 6);
	addEdge(4, 7);
	addNodo(5, "Chihuahua");
	addEdge(5, 3);
	addEdge(5, 7);
	addEdge(5, 8);
	addNodo(6, "Nayarit");
	addEdge(6, 4);
	addEdge(6, 7);
	addEdge(6, 9);
	addNodo(7, "Durango");
	addEdge(7, 4);
	addEdge(7, 5);
	addEdge(7, 6);
	addEdge(7, 8);
	addEdge(7, 10);
	addNodo(8, "Coahuila");
	addEdge(8, 5);
	addEdge(8, 7);
	addEdge(8, 10);
	addEdge(8, 11);
	addNodo(9, "Jalisco");
	addEdge(9, 6);
	addEdge(9, 10);
	addEdge(9, 12);
	addEdge(9, 13);
	addEdge(9, 16);
	addNodo(10, "Zacatecas");
	addEdge(10, 7);
	addEdge(10, 8);
	addEdge(10, 9);
	addEdge(10, 13);
	addEdge(10, 14);
	addNodo(11, "NuevoLeon");
	addEdge(11, 8);
	addEdge(11, 14);
	addEdge(11, 15);
	addNodo(12, "Colima");
	addEdge(12, 9);
	addEdge(12, 16);
	addNodo(13, "Aguascalientes");
	addEdge(13, 9);
	addEdge(13, 10);
	addNodo(14, "SanLuisPotosi");
	addEdge(14, 10);
	addEdge(14, 11);
	addEdge(14, 15);
	addEdge(14, 17);
	addEdge(14, 20);
	addEdge(14, 27);
	addNodo(15, "Tamaulipas");
	addEdge(15, 11);
	addEdge(15, 14);
	addEdge(15, 27);
	addNodo(16, "Michoacan");
	addEdge(16, 9);
	addEdge(16, 12);
	addEdge(16, 17);
	addEdge(16, 18);
	addEdge(16, 19);
	addEdge(16, 20);
	addNodo(17, "Guanajuato");
	addEdge(17, 14);
	addEdge(17, 16);
	addEdge(17, 20);
	addNodo(18, "Guerrero");
	addEdge(18, 16);
	addEdge(18, 19);
	addEdge(18, 21);
	addEdge(18, 25);
	addEdge(18, 26);
	addNodo(19, "EstadoDeMexico");
	addEdge(19, 16);
	addEdge(19, 18);
	addEdge(19, 20);
	addEdge(19, 21);
	addEdge(19, 22);
	addEdge(19, 23);
	addEdge(19, 24);
	addNodo(20, "Queretaro");
	addEdge(20, 14);
	addEdge(20, 16);
	addEdge(20, 17);
	addEdge(20, 19);
	addEdge(20, 23);
	addNodo(21, "Morelos");
	addEdge(21, 18);
	addEdge(21, 19);
	addEdge(21, 22);
	addEdge(21, 24);
	addNodo(22, "CDMX");
	addEdge(22, 19);
	addEdge(22, 21);
	addNodo(23, "Hidalgo");
	addEdge(23, 19);
	addEdge(23, 20);
	addEdge(23, 24);
	addEdge(23, 25);
	addEdge(23, 27);
	addNodo(24, "Tlaxcala");
	addEdge(24, 19);
	addEdge(24, 21);
	addEdge(24, 23);
	addEdge(24, 25);
	addNodo(25, "Puebla");
	addEdge(25, 18);
	addEdge(25, 21);
	addEdge(25, 23);
	addEdge(25, 24);
	addEdge(25, 26);
	addNodo(26, "Oaxaca");
	addEdge(26, 18);
	addEdge(26, 25);
	addEdge(26, 27);
	addEdge(26, 28);
	addNodo(27, "Veracruz");
	addEdge(27, 14);
	addEdge(27, 15);
	addEdge(27, 23);
	addEdge(27, 26);
	addEdge(27, 28);
	addEdge(27, 29);
	addNodo(28, "Chiapas");
	addEdge(28, 26);
	addEdge(28, 27);
	addEdge(28, 29);
	addNodo(29, "Tabasco");
	addEdge(29, 27);
	addEdge(29, 28);
	addEdge(29, 30);
	addNodo(30, "Campeche");
	addEdge(30, 29);
	addEdge(30, 31);
	addEdge(30, 32);
	addNodo(31, "Yucatan");
	addEdge(31, 30);
	addEdge(31, 32);
	addNodo(32, "QuintanaRoo");
	addEdge(32, 30);
	addEdge(32, 31);

return 0;
}

void addNodo(){
	struct Nodo *auxiliar;
	struct Nodo *nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
	int numeroestado;
	char estado[30];
	
	nuevo->siguiente=NULL;
	nuevo->arista=NULL;
	if(inicio==NULL)
	{
		inicio=nuevo;
	}else{
		auxiliar=inicio;
		while(auxiliar->siguiente!=NULL){
			auxiliar=auxiliar->siguiente;
		}
		auxiliar->siguiente=nuevo;
	}
	printf("Numero: %d Estado: %c \n", auxiliar);
}

void addEdge(){
	struct Edge *nuevo=(struct Edge*)malloc(sizeof(struct Edge));
	struct Nodo *auxiliar, *auxiliar2;
	int numeroestado, numeroestado2;
	if(inicio==NULL)
	{
		printf("Grafo vacio\n");
		return;
	}else{
		auxiliar=inicio;
		auxiliar2=inicio;
		while(auxiliar2!=NULL){
			if(auxiliar2->dato==numeroestado2)
			break;
			auxiliar2=auxiliar2->siguiente;
		}
		while(auxiliar!=NULL){
			if(auxiliar->dato==numeroestado)
			break;
			auxiliar=auxiliar->siguiente;
		}
	}
	printf("Estado: %s adyacente con -> : %s\n", auxiliar, auxiliar2);
}

init(){
	int i,j;
	char res,enter;
	
	for(i=1;i<-32; i++){
		for(j=1;j<-32;j++){
			if(i==j){
				grafo[i][j]=0;
			}
			printf("los nodos %d y %d son adyacentes) Y/N : ",i,j);
			scanf("%c", &res);
			if(res == 'y' || res== 'Y')
				grafo[i][j]=1;
			else
				grafo[i][j]=0;
			scanf("%d", &enter);
		}
	}
}

