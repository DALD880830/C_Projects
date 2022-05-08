#include <stdio.h>

int main()
{
	int num1, *p_num1= &num1;
	int num2, *p_num2= &num2;
	int num3, *p_num3= &num3;
	
	p_num1=p_num2;
	
	printf("Dame el primer valor\n");
	scanf("%d",&num1);
	printf("Ahora dame el segundo\n");
	scanf("%d",&num2);
	num3 = num1 + num2;
	printf("Tu suma es:%d\n", num3);
	
	printf("El lugar de guardado en la memoria es:\nPara el primer numero: %p \nPara el segundo numero: %p \nPara el tercer numero: %p",p_num1, p_num2, p_num3);
	
	return 0;
	}
