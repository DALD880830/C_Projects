#include<stdio.h>
int main()
{
	int num1;
	int resultado;
	printf("Dame un lado del cuadrado para su area\n");
	scanf("%d",num1);
	resultado = num1*num1;
	printf("El area de tu cuadrado es:%d\n",resultado);
	return 0;
}