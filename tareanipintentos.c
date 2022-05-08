#include <stdio.h>
int main()
{
    int num1;
    int correcta;
    int intentos;
    int restantes, b=3;
    printf("Escribe tu NIP\n");
    scanf("%d",&num1);
    {
        do
        {
            printf("Vuelve a introducir tu NIP\n");
            scanf("%d",&correcta);
            intentos = intentos+1;
            restantes= b-intentos;
            printf("Te quedan %d intentos...", restantes);
            if(restantes == 1) printf("Ultima oportunidad\n");
        }
        while(intentos<3 & correcta!=num1);
        if(correcta==num1)
        {
        printf("Excelente, lograste entrar\n");
        }
        else{printf("Usuario no autorizado\n");}
    }
    return 0;
}