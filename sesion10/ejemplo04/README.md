[`Introducción a la Programación`](../README.md) > [`Sesión 10`](../README.md) > `Ejemplo 4`

## Ejemplo 4: Índice de masa corporal

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica la definición y uso de funciones.

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

Definimos ahora un programa que calcule el índice de masa corporal de una persona. Para ello definimos dos funciones la primera calcula el índice de masa coorporal y la segunda interpreta los resultados.

Al usar prototipos, debemos definir antes su firma.

- La primera función será llamada `imc` y recibe el peso y estatura de una persona, de tipo `float`. El resultado es un flotante también. Nota cómo en un prototipo no importa el nombre de los parámetros.

   ```c
   float imc(float,float);
   ```

- La seguna función será llamada `interpreta` y recibe el imc de una persona. No regresa nada, únicamente imprime la interpretación de los resultados.

   ```c
   void interpreta(float);
   ```

Definimos el programa final, usando los prototipos. Nota que aunque no hemos definidos las funciones, al saber qué reciben y qué devuelven, podemos usarlas sin problemas. Claro, si compilamos el programa obtendremos un error.

```c
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
```

Definimos ahora las funciones correspondientes. Añadimos la descripción como comentario.

[`imc.c`](codigos/imc.c)
```c
#include <stdio.h>
#include <math.h>

// Prototipos

float imc(float,float);
void interpeta(float);

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
```

[`Anterior`](../README.md#prototipos) | [`Siguiente`](../README.md#3-actividad-memo)   

</div>
