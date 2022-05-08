#include <stdio.h>

int main()

{
    int arregloa[3];
    int arreglob[3];
    int a;
    int b;
    printf("COMPARACION DE 2 ARREGLOS\n");
    
    for(a=0; a<3; a++)
        {
            printf("Numeros del arreglo A:\n");
            scanf(" %d ", &arregloa);
        }
    for(b=0; b<3; b++)
        {
            printf("Dame los del arreglo B:\n");
            scanf(" %d ", &arreglob);
        }
    
    printf("\n Arreglo A: %d \n", arregloa);
    printf("\n Arreglo B: %d \n", arreglob);

        if(arregloa[a]==arreglob[b])
            {
                printf("Los arreglos son iguales");
            }
        else
            {
                printf("Los arreglos no son iguales");
            }
    return 0;
}