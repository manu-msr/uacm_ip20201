#include <stdio.h>

/* Función que calcula el promedio de tres números. */
float promedio(float a, float b, float c)
{
   return (a + b + c) / 3;
}

/* Función principal */
int main(void)
{
   /* Declaración de variables. */

   // Variable que almacena el valor de a.
   float a;
   // Variable que almacena el valor de b.
   float b;
   // Variable que almacena el valor de c.
   float c;

   /* Pedir datos al usuario. */

   printf("Introduce el primer número: ");
   scanf("%f", &a);
   printf("Introduce el segundo número: ");
   scanf("%f", &b);
   printf("Introduce el tercer número: ");
   scanf("%f", &c);

   /* Mostrar resultados. */

   printf("\nEl promedio es: %f\n", promedio(a,b,c));

   return 0;
}