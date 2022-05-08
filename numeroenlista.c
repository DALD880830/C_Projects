#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10]={7,30,9,16,8,32,95,32,18,1};
    int b;
    int aux;
    char band='F';
    
    printf("Dame un numero para darte la posición en la lista o si no existe:\n");
    scanf("%d", aux);
    
    a=0;
        while((band=='F')&&(a<10))
        {
            if(a[b]==aux)
            {
                band='V';
            }
            a++;
        }
        if(band=='F')
        {
            printf("El numero no existe en la lista");
        }
        else
            if(band='V')
            {
                printf("El numero esta en el lugar %d",b);
            }
    return 0;
}