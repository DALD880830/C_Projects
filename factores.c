#include <stdio.h>

int main()
{
    int a;
    int num1;
    int contadorfactores=1;
    int rangofactores[1000];
    
    printf("Escribe un numero para hallar el factor:");
    scanf("%d", &num1);
    
    while(a<=num1);
        {
            if(num1%a==0)
                {
                    rangofactores[contadorfactores]=a;
                    num1=num1/a;
                    contadorfactores++;
                }
            a++;
            
        }
    a=0;   
        while(a<contadorfactores)
            {
                printf(" %d ", rangofactores[1000]);
                a++;
            }
    return 0;
}