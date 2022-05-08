#include <stdio.h>

int main()
{
    int matrizalfa[3][3], filas=3, columnas=3;
    int matrizbeta[3][3];
    int matrizfinal[3][3];
    int a, b;
    int c, d;
    int e, f;
    int g;
    printf("MULTIPLICACION DE 2 MATRICES DE 3x3\n\n");
    printf("MATRIZ NUMERO 1\n");
    for(a=0; a<filas; a++)
    {
        for(b=0; b<columnas; b++)
        {
            printf("Coloca los numeros de la matriz[%d][%d]:", a, b);
            scanf("%d", &matrizalfa[a][b]);
        }
    }
    printf("\n");
    for(a=0; a<filas; a++)
        {
            for(b=0; b<columnas; b++)
            {
                printf(" %d ", matrizalfa[a][b]);
            }
            printf("\n");
        }
    printf("\nMATRIZ NUMERO 2\n");
    for(c=0; c<filas; c++)
    {
        for(d=0; d<columnas; d++)
        {
            printf("Coloca los numeros de la matriz[%d][%d]:", c, d);
            scanf("%d", &matrizbeta[c][d]);
        }
    }
    printf("\n");
    for(c=0; c<filas; c++)
        {
            for(d=0; d<columnas; d++)
            {
                printf(" %d ", matrizbeta[c][d]);
            }
            printf("\n");
        }
    printf("\nAhora vamos a multiplicar las 2 matrices\n");
    for(e=0; e<filas; e++)
        {
            for(f=0; f<columnas; f++)
                {
                    matrizfinal[e][f]=0;
                    for(g=0; g<columnas; g++)
                        {
                        matrizfinal[e][f]+=matrizalfa[a][g]*matrizbeta[g][d];
                        }
                }
        }
    for(e=0; e<filas; e++)
        {
            for(f=0; f<columnas; f++)
            {
                printf("  %d  ", matrizfinal[e][f]);
            }
            printf("\n");
        }
    return 0;
}