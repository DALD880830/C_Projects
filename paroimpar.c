#include <stdio.h>
int main()
{
	int num1;
	printf("Pon un numero aqui\n");
	scanf("%d",&num1);
	if (num1%2==0)
	{
		printf("%d Es un numero par\n",num1);
	}
	else
	{
		printf("%d Es un numero impar\n",num1);
	}
	return 0;
}