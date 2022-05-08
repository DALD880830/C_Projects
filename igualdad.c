#include <stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Pon un numero aqui\n");
	scanf("%d",&num1);
	printf("Pon otro numero aca\n");
	scanf("%d",&num2);
	if (num1>num2)
	{
		printf("Los numeros son distintos\n",num1);
	}
	else{
		if (num1<num2)
		{
			printf("Los numeros son diferentes\n",num2);
			}else{
				printf("Los numeros son iguales\n");
		}
	}
	return 0;
}