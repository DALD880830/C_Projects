#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int resultado;
	printf("La base del triangulo es:\n");
	scanf("%d",&num1);
	printf("La altura del triangulo es:\n");
	scanf("%d",&num2);
	resultado=num1*num2/2;
	printf("El area del triangulo es:%d\n",resultado);
	return 0;
}