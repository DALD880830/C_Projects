#include <stdio.h>
#include <conio.h> 
 
void main(void)
{
	int *p;  int valor; 
 	printf("Introducir valor: ");
	 scanf("%d",&valor);
	p=&valor; 
 
 	printf("Dirección de memoria de valor es: %p\n",p);
	 printf("El valor de la variable es: %d",*p);
	 getch();
}
