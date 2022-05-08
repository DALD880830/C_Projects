#include <stdio.h>

struct automovil
{
    char marca[100];
    int anio;
    int kilometraje;
    float precio;
}automovil;

void coche(struct automovil *a);

void main()
{
	automovil *a;
	printf("DATOS DE UN AUTOMOVIL EN UNA ESTRUCTURA DE DATOS\n\n");
    printf("Ingresa la marca del carro: \n");
    gets(automovil.marca);
    printf("Ingresa el año del carro:\n");
    scanf("%d", &automovil.anio);
    printf("Ingresa el kilometraje que tiene el carro:\n");
    scanf("%d", &automovil.kilometraje);
    printf("Ingresa el precio del carro:\n");
    scanf("%f", &automovil.precio);
    coche (a);
}

void coche(struct automovil *a)
{
    printf("\nLos datos del alumno son:\n\nMARCA: %s\nAÑO: %d\nKILOMETRAJE: %d\nPRECIO: %f\n", a->marca, a->anio, a->kilometraje, a->precio);
}
