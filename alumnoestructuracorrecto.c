#include <stdio.h>

struct alumno
{
    char nombre[100];
    int numerodecuenta;
    char licenciatura[50];
    int semestre;
    float promedio;
}alumno;
int main()
{
    printf("DATOS DE UN ALUMNO EN UNA ESTRUCTURA DE DATOS\n\n");
    printf("Ingresa el nombre del alumno: \n");
    gets(alumno.nombre);
    printf("Ingresa el numero de cuenta del alumno:\n");
    scanf("%d", &alumno.numerodecuenta);
    printf("Ingresa la licenciatura del alumno:\n");
    scanf("%s", &alumno.licenciatura);
    printf("Ingresa el numero de semestre del alumno:\n");
    scanf("%d", &alumno.semestre);
    printf("Ingresa el promedio del alumno:\n");
    scanf("%f", &alumno.promedio);
    
    printf("\nLos datos del alumno son:\n\nNOMBRE: %s\nNo. DE CUENTA: %d\nLICENCIATURA: %s\nSEMESTRE: %d\nPROMEDIO: %f\n", alumno.nombre, alumno.numerodecuenta, alumno.licenciatura, alumno.semestre, alumno.promedio);
    
    return 0;
}
