#include <stdio.h>

int main()
{
    double numero=6.0;
    double f;
    f=ft(numero);
    printf("El valor es: % 15.0lf\n", f);
    getchar();
    return 0;
    
    double ft(double respuesta)
    
    if (respuesta<=1.0)
    return (1.0);
    else
    return (respuesta*ft(respuesta-1.0));
}
