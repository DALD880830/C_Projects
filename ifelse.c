#include <stdio.h>
 int main()
 {
 	int edad;
 	printf("Dame tu edad\n");
 	scanf("&d", &edad);
 	if(edad>=30)
 	{
 	printf("Ya creciste\n");
 	}
 	else if(edad<=29)
 	{
 	printf("Aun eres joven\n");
 	}
 	return 0;
 }
