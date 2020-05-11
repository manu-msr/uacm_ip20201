#include <stdio.h>

long factorial(int);

int main(void)
{
   int cartas;

   printf("Introduce el número de cartas: ");
   scanf("%d", cartas);

   printf("\nEl número de combinaciones es: %ld\n", factorial(cartas));

   return 0;
}

long factorial(int n)
{
   if (n == 0)
      return 1;
   return n * factorial(n-1);
}
