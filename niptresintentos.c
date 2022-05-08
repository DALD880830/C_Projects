#include <stdio.h>
int main()
{
    int num1;
    int correcta;
    int intentos=0;
    int restantes=3;
    printf("Escribe tu NIP\n");
    scanf("%d",&num1);
    {
        do
        {
            printf("Vuelve a introducir tu NIP, tienes 3 intentos\n");
            scanf("%d",&correcta);
            intentos++;
            restantes=restantes-intentos;
            printf("Te quedan %d intentos", restantes);
            if(correcta != num1) printf("...El NIP no es correcto\n");
        }
        while(intentos<3 && correcta!=num1);
        if(correcta==num1)
        {
        printf("Tu NIP es correcto\n");
        }
        else{printf("Usuario no autorizado\n");}
    }
    return 0;
}