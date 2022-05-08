#include <stdio.h>
int main()
{
	int edad;
	printf("Escribe tu edad\n");
	scanf("&d", &edad);
	if(edad >=30)
	{
	printf("Has crecido\n");
	}else{
	printf("Aun eres joven\n");
	}
	return 0;
}