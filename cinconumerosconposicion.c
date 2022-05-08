#include <stdio.h>

int main()
{
    int numeros[5], *p_numeros[5];
    int a;
    
    printf("5 NUMEROS INGRESADOS CON SU POSICION DE MEMORIA\n\n");
    printf("Dame 5 numeros:\n");
    for(a=0; a<5; a++)
    {
    printf("No. %d = ", a+1);
    scanf("%d", &numeros[a]);
    }
    printf("\n");
    for(a=0; a<5; a++)
    {
    printf("Para el numero: %d  La posicion de memoria es: %p\n", numeros[a], p_numeros[a]);
    }
    return 0;
}
