#include <stdio.h>
#include <math.h>

/* Programa que calcula el área de un círculo a partir
   del radio ingresado por el usuario. */

int main(void)
{
   // Declaración de variables
   float radio;
   float area;

   // Pedir datos al usuario
   printf("Introduce el radio del círculo: ");
   scanf("%f", &radio);

   // Cálculo del área
   area = M_PI * pow(radio,2);

   // Mostrar resultados
   printf("\nEl resultado es: %f\n", area);

   system("pause"); // Para DevC++
   return 0;
}
