#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int resultado;
	printf("Dame el primer valor\n");
	scanf("%d",&num1);
	printf("Ahora dame el segundo\n");
	scanf("%d",&num2);
	resultado = num1 + num2;
	printf("Tu suma es:%d\n",resultado);
	
	
	return 0;
}
