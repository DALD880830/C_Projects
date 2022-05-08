#include <stdio.h>
#include <string.h>
int main()
{
    int letra;
    int longitud;
    char cadena[100];
    printf("Escribe una frase: \n");
    scanf ("%s", cadena);
 
    longitud = strlen(cadena);
    printf ("\n");
    for(letra=1; letra<=longitud; letra++)
    {
        printf(" %d ", letra);
    }
    printf ("\n");
    printf (" \nLa frase tiene %d caracteres", longitud);
    return 0;
}