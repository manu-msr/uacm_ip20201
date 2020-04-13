[`Introducción a la Programación`](../README.md) > [`Sesión 10`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Promedio de tres números

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica la definición y uso de funciones.

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

En este ejemplo vamos a definir una función que calcula el promedio de tres números y la usaremos en un programa. Para definir una función, se recomienda seguir los siguienes pasos:

1. Entender lo que hace la función.
1. Escribir la descripción a través de los comentarios
1. Escribir su firma, es decir, el nombre de la función, cuántos parámetros recibe, de qué tipo son, cuál es el valor de regreso.
1. Definir algunos casos de prueba.
1. Finalmente implementar la función.

En este caso, se entiende que la función debe recibir tres números y calcular el promedio, así que ponemos esto en la descripción de la función, mediante comentarios.

```c
/* Función que calcula el promedio de tres números. */
```

Procedemos a escribir su firma. En este caso, llamaremos a la función `promedio`. La función recibe tres números que pueden tener decimales, por lo tanto, usaremos el tipo de dato `float`. La salida también debe ser de tipo `float`. Recuerda que cada valor de entrada debe tener un nombre que lo represente, llamamos a estos nombres, los *parámetros formales* de la función.

```c
/* Función que calcula el promedio de tres números. */
float promedio(float a, float b, float c)
{

}
```

Algunos casos de prueba podrían ser:

- `promedio(10.0,10.0,10.0) = 10.0`
- `promedio(9,10,2) = 7`
- `promedio(4,4,10) = 9`

Finalmente, añadimos el cuerpo de la función, es decir, las instrucciones de lo que debe realizar.

```c
/* Función que calcula el promedio de tres números. */
float promedio(float a, float b, float c)
{
   return (a + b + c) / 3;
}
```

Ahora, integramos esta función en un programa que interactúe con el usuario, pidiendo los tres números desde teclado.

[`promedios.c`](codigos/promedios.c)
```c
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
```

Nota cómo se utiliza la función promedio. Debe colocarse el nombre de la función y tres valores para ejecutar la función. En este punto los valores que se pasan a la función tienen un valor concreto, por lo tanto son llamados *parámetros reales*.

Ejemplo de ejecución

```
Introduce el primer número: 9
Introduce el segundo número: 10
Introduce el tercer número: 2

El promedio es 7.0
```

[`Anterior`](../README.md#funciones) | [`Siguiente`](../ejemplo02/README.md)   

</div>
