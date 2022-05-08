#include <stdio.h>
#include <stdlib.h>


int main()
{
      
	int comparaciones = 0;
	int i;
	int encontrado;
	int j;
	int indice=-1;
	
	char nom[50];
    int x;
    typedef char cadenaCaracteres [50];
    cadenaCaracteres arrayCadenas[10];
    
    typedef char nombreabuscar[50];
    nombreabuscar busqueda[1];

printf("BUSQUEDA LINEAL\n\n");
printf("Ingresa 10 nombres\n\n");

for(x=0;x<10;x++){
    printf("Nombre %i: ", x+1);
    scanf("%s",arrayCadenas[x]);
}
printf("\n");
printf("Escribe el nombre que deseas buscar:\n");
scanf("%s", busqueda[j]);
encontrado=0;

printf("\n");

for(x=0;x<10;x++) {
		printf("Busqueda No. %i:   ", x+1);
		comparaciones++;
		if (strcmp(arrayCadenas[x], busqueda[j])==0) {
			indice=i;
			encontrado=1;
			printf("El nombre %s se encuentra en la posicion numero %i\n", busqueda[j], x+1);
			printf("\n");
			printf("Se realizaron %i comparaciones\n", comparaciones);
			return 0;
			}
			else{
				printf("El nombre no esta en la posicion %i\n", x+1);
			}
	}

printf("\n");

if (!encontrado){
	printf("El nombre %s no esta en la lista\n Se realizaron %i comparaciones", busqueda[j], comparaciones);
}
  return 0;
}
