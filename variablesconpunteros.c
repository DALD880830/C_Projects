#include <stdio.h>

void cambiodevariable( int *a, int *b);

void main()
{
    int a;
    int b;
    printf("CAMBIO DE VARIABLES UTILIZANDO PUNTEROS\n\n");
    printf("Dame el numero de la primer variable:\n");
    scanf("%d", &a);
    printf("Dame el numero de la segunda variable:\n");
    scanf("%d", &b);
    
    printf("\nVariable No.1 %d\nVariable No.2 %d\n", a,b);
    cambiodevariable(&a,&b);
    printf("\nAl cambiar las variables queda:\n");
    printf("Variable No.1 %d\nVariable No.2 %d\n", a,b);
}
void cambiodevariable( int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
