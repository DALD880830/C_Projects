#include<stdio.h>
int main()
{
	int num1;
	int a=4;
	int resultado;
	printf("Dame un lado del cuadrado para su perimetro\n");
	scanf("%d",num1);
	resultado = num1*a;
	printf("El perimetro de tu cuadrado es:%d\n",resultado);
	return 0;
}