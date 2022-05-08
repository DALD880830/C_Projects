#include<stdio.h>
int main()
{
	float num1;
	float num2;
	float resultado;
	printf("La base del triangulo es:\n");
	scanf("%f",&num1);
	printf("La altura del triangulo es:\n");
	scanf("%f",&num2);
	resultado=num1*num2/2;
	printf("El area del triangulo es:%f\n",resultado);
	return 0;
}