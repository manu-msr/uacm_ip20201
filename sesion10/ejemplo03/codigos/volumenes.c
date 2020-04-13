#include <stdio.h>
#include <math.h>

/* Función que calcula el volumen de una esfera a partir de su radio. */   
float volumenEsfera(float r)
{
   return 4/3 * M_PI * pow(r,3);
}

/* Función que pregunta al usuario si desea continuar con la ejecución y 
   devuelve la respuesta ingresada por el mismo. */
char pideOpcion(void)
{
   char opcion;
   printf("\n¿Deseas calcular otro volumen? (s/n): ");
   scanf(" %c", &opcion);
   return opcion;
}

/* Función principal */
int main(void)
{
   /* Declaración de variables. */

   // Variable que almacena el radio de la esfera.
   float r;
   // Variable que almacena la opción para continuar en ejecución.
   char o;

   do
   {
      printf("\nIntroduce el radio de la esfera: ");
      scanf("%f", &r);

      printf("\nEl volumen es: %f\n", volumenEsfera(r));
      o = pideOpcion();
   } while (o != 'n');

   return 0;
}