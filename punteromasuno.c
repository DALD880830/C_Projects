#include <stdio.h>

int main()
{
	int num1, *p_num1= &num1;
	int num2, *p_num2= &num2;
	p_num2=p_num1+1;
	
	printf("Dame un numero\n");
	scanf("%d",&num1);
	
	printf("La posicion de la memoria es:\nPara el numero: %p \nAumentando en 1 la posicion: %p",p_num1, p_num2);
	
	return 0;
}
