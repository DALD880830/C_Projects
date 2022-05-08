#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nom[20];
    int x;
    typedef char cadenaCaracteres [50]; //Definimos el tipo cadenaCaracteres
    cadenaCaracteres arrayCadenas[5]; //Creamos un vector de cadenas


for(x=0;x<5;x++){
    printf("Ingrese nombre %i: ", x+1);
    scanf("%s",arrayCadenas[x]);
}
printf("\n");
for(x=0;x<5;x++){
    printf("Elemento %d es %s \n", x+1, arrayCadenas[x]);
}
  return 0;
}
