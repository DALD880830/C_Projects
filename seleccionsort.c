#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datos{
   char nombre[30];
   char apellido[30];
}datos;

struct datos empleado[30];
struct datos aux;

int i, j, k, r, x;

int main(){
	
	for(x=0; x<=29; x++)
	{
	printf("Nombre %i : ", x+1);
	scanf("%s", &datos.nombre);
	printf("Apellido %i : ", x+1);
	scanf("%s", &datos.apellido);
	}
	
for (i=0; i<30-1; i++){
	
   for (j=i+1; j<30; j++){
      r = strcmp(empleado[i].apellido, empleado[j].apellido);
      if (r > 0 || (r == 0 && strcmp(empleado[i].nombre, empleado[j].nombre) > 0)){
         aux = empleado[i];
         empleado[i] = empleado[j];
         empleado[j] = aux;
      }
   }
}
for(k=0; k<30; k++)
	{
		printf("%s   %s", empleado[k].apellido, empleado[k].nombre);
	}
return 0;
}
