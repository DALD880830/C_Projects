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

void addNodo();
void addEdge();

int main(){

addNodo(1, "BajaCaliforniaSur");
addNodo(2, BajaCalifornia);
addNodo(3, Sonora);
addNodo(4, Sinaloa);
addNodo(5, Chihuahua);
addNodo(6, Nayarit);
addNodo(7, Durango);
addNodo(8, Coahuila);
addNodo(9, Jalisco);
addNodo(10, Zacatecas);
addNodo(11, NuevoLeon);
addNodo(12, Colima);
addNodo(13, Aguascalientes);
addNodo(14, SanLuisPotosi);
addNodo(15, Tamaulipas);
addNodo(16, Michoacan);
addNodo(17, Guanajuato);
addNodo(18, Guerrero);
addNodo(19, EstadoDeMexico);
addNodo(20, Queretaro);
addNodo(21, Morelos);
addNodo(22, CDMX);
addNodo(23, Hidalgo);
addNodo(24, Tlaxcala);
addNodo(25, Puebla);
addNodo(26, Oaxaca);
addNodo(27, Veracruz);
addNodo(28, Chiapas);
addNodo(29, Tabasco);
addNodo(30, Campeche);
addNodo(31, Yucatan);
addNodo(32, QuintanaRoo);

addEdge(1->2);
addEdge(2->3);
addEdge(3->4);
addEdge(3->5);
addEdge(4->6);
addEdge(4->7);
addEdge(5->3);
addEdge(5->7);
addEdge(5->8);
addEdge(6->4);
addEdge(6->7);
addEdge(6->9);
addEdge(7->4);
addEdge(7->5);
addEdge(7->6);
addEdge(7->8);
addEdge(7->10);
addEdge(8->5);
addEdge(8->7);
addEdge(8->10);
addEdge(8->11);
addEdge(9->6);
addEdge(9->10);
addEdge(9->12);
addEdge(9->13);
addEdge(9->16);
addEdge(10->7);
addEdge(10->8);
addEdge(10->9);
addEdge(10->13);
addEdge(10->14);
addEdge(11->8);
addEdge(11->14);
addEdge(11->15);
addEdge(12->9);
addEdge(12->16);
addEdge(13->9);
addEdge(13->10);
addEdge(14->10);
addEdge(14->11);
addEdge(14->15);
addEdge(14->17);
addEdge(14->20);
addEdge(14->27);
addEdge(15->11);
addEdge(15->14);
addEdge(15->27);
addEdge(16->9);
addEdge(16->12);
addEdge(16->17);
addEdge(16->18);
addEdge(16->19);
addEdge(16->20);
addEdge(17->14);
addEdge(17->16);
addEdge(17->20);
addEdge(18->16);
addEdge(18->19);
addEdge(18->21);
addEdge(18->25);
addEdge(18->26);
addEdge(19->16);
addEdge(19->18);
addEdge(19->20);
addEdge(19->21);
addEdge(19->22);
addEdge(19->23);
addEdge(19->24);
addEdge(20->14);
addEdge(20->16);
addEdge(20->17);
addEdge(20->19);
addEdge(20->23);
addEdge(21->18);
addEdge(21->19);
addEdge(21->22);
addEdge(21->24);
addEdge(22->19);
addEdge(22->21);
addEdge(23->19);
addEdge(23->20);
addEdge(23->24);
addEdge(23->25);
addEdge(23->27);
addEdge(24->19);
addEdge(24->21);
addEdge(24->23);
addEdge(24->25);
addEdge(25->18);
addEdge(25->21);
addEdge(25->23);
addEdge(25->24);
addEdge(25->26);
addEdge(26->18);
addEdge(26->25);
addEdge(26->27);
addEdge(26->28);
addEdge(27->14);
addEdge(27->15);
addEdge(27->23);
addEdge(27->26);
addEdge(27->28);
addEdge(27->29);
addEdge(28->26);
addEdge(28->27);
addEdge(28->29);
addEdge(29->27);
addEdge(29->28);
addEdge(29->30);
addEdge(30->29);
addEdge(30->31);
addEdge(30->32);
addEdge(31->30);
addEdge(31->32);
addEdge(32->30);
addEdge(32->31);

return 0;
}

void addNodo(){
	int numeroestado;
	char estado[30];
	struct Nodo *auxiliar;
	struct Nodo *nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
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
}

void addEdge(){
	char estados[30][30];
	struct Edge *nuevo=(struct Edge*)malloc(sizeof(struct Edge));
	struct Nodo *auxiliar, *auxiliar2;
	if(inicio==NULL)
	{
		printf("grafo vacio\n");
		return;
	}else{
		auxiliar=inicio;
		auxiliar2=inicio;
		while(auxiliar2!=NULL){
			auxiliar2=auxiliar2->siguiente;
		}
	}
	
}


