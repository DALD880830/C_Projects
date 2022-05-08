#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, j, k, r;
	char aux;
	
	char nom[50];
    int x;
    typedef char cadenaCaracteres [50];
    cadenaCaracteres arrayCadenas[5];
	
	for(x=0; x<5; x++)
	{
	printf("Nombre %i : ", x+1);
	scanf("%s", arrayCadenas[x]);
	}
	
for (x=0; x<5-1; x++){
	
   for (i=x+1; i<5; i++){
      r = strcmp(arrayCadenas[x], arrayCadenas[i]);
      if (r > 0 || (r == 0 && strcmp(arrayCadenas[x], arrayCadenas[i]) > 0)){
         aux = arrayCadenas[x];
         arrayCadenas[x] = arrayCadenas[i];
         arrayCadenas[i] = aux;
      }
   }
}
for(j=0; j<5; j++)
	{
		printf("%s, ", arrayCadenas[j]);
	}
return 0;
}
