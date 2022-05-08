#include <stdio.h>
#include <string.h>
 
int main()
{
    char frase1[100];
    
    printf("Escribe una frase:\n", frase1);
    gets(frase1);
    strupr(frase1);
    printf("En mayusculas es:%s", frase1);
    
    return  0;
}