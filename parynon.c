#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int a, sum=0;
	int b;
	printf("Si quieres sumar pares escribe 2, impares escribe 1\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if (num1>=2)
	{
		for(a=0;a<=100;a=a+2){
		printf("%d",a);
		sum =sum+a;
	}
	printf("El resultado de los pares es:%d",sum);
}
	else{for(b=1;b<=99;b=b+2){
		printf("%d",b);
		sum =sum+b;
	}
	printf("El resultado de los impares es:%d",sum);
}
	return 0;
}