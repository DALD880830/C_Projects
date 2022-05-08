#include <stdio.h>

#include <conio.h>

main()

{

   int a, b, c;

   int *p1, *p2, *p3; /*declaración de los punteros */

   printf("Ingrese el valor de a:\n");

   scanf("%d", &a);

   printf("Ahora el valor de b:\n");

   scanf("%d", &b);

   c=a+b;

   printf("a+b=%d\n", c);

   /*asignamos las direcciones a los punteros correspondientes*/

   p1=&a;

   p2=&b;

   printf("*p1 + *p2=%d\n", *p1+*p2);

   p3=&c;

   printf(" Dirección de a es %p\n Dirección de b es %p\n Y la de c es %p\n\n", p1, p2, p3);

   getch();

   return 0;

}
