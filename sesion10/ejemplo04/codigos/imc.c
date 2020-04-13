#include <stdio.h>
#include <math.h>

// Prototipos

float imc(float,float);
void interpreta(float);

int main(void)
{
   // Variable que almacena el peso de una persona.
   float peso;
   // Variable que almacena la estatura de una persona.
   float estatura;

   // Pedir datos al usuario
   printf("Introduce tu peso: ");
   scanf("%f", &peso);
   printf("Introduce tu estatura: ");
   scanf("%f", &estatura);

   float resultado = imc(peso,estatura);

   printf("\nTu IMC es: %f\n", resultado);

   interpreta(resultado);

   return 0;
}

/* Función que calcula el imc de una persona. */
float imc(float peso, float estatura)
{
   return peso / pow(estatura,2);
}

/* Función que interpreta los resultados del imc. */
void interpreta(float imc)
{
   if (imc < 18.5)
      printf("Te encuentras bajo de peso\n");
   else if (imc >= 18.5 && imc < 24.9)
      printf("Te encuentras en tu peso normal\n");
   else if (imc >= 25.0 && imc < 29.9)
      printf("Te encuentras en sobrepeso\n");
   else if (imc >= 30.0 && imc < 34.9)
      printf("Te encuentras en obesidad grado I\n");
   else if (imc >= 35.0 && imc < 39.9)
      printf("Te encuentras en obesidad grado II\n");
   else
      printf("Te encuentras en obesidad grado III\n");
}