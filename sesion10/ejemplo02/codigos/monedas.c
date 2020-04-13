#include <stdio.h>

/* Función que calcula el total de dinero a partir del número de monedas de cada 
   denominación. */
float sumaMonedas(int a, int b, int c, int d, int e)
{
   return (a * 0.5) + b + (c * 2) + (d * 5) + (e * 10);
}

/* Función principal */
int main(void)
{
   /* Declaración de variables. */

   // Variable que almacena el número de monedas de $0.50.
   int a;
   // Variable que almacena el número de monedas de $1.00.
   int b;
   // Variable que almacena el número de monedas de $2.00.
   int c;
   // Variable que almacena el número de monedas de $5.00.
   int d;
   // Variable que almacena el número de monedad de $10.00.
   int e;

   /* Pedir datos al usuario. */

   printf("Introduce el número de monedas de 0.50 centavos: ");
   scanf("%d", &a);
   printf("Introduce el número de monedas de 1 peso:  ");
   scanf("%d", &b);
   printf("Introduce el número de monedas de 2 pesos: ");
   scanf("%d", &c);
   printf("Introduce el número de monedas de 5 pesos: ");
   scanf("%d", &d);
   printf("Introduce el número de monedas de 10 pesos: ");
   scanf("%d", &e);

   /* Mostrar resultados. */

   printf("\nEl total es: %f\n", sumaMonedas(a,b,c,d,e));

   return 0;
}