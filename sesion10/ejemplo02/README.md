[`Introducción a la Programación`](../README.md) > [`Sesión 10`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Suma de monedas

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica la definición y uso de funciones.

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

Un niño tiene distintas monedas de 50 centavos, de 1, 2, 5 y 10 pesos y quiere saber el total de dinero que tiene. En este ejemplo escribiremos un programa que de respuesta a esta pregunta mediante la definición de una función.

En este caso, se entiende que la función debe recibir el número de monedas de cada denominación y calcular el total de dinero. Así que ponemos esto en la descripción de la función, mediante comentarios.

```c
/* Función que calcula el total de dinero a partir del número de monedas de cada 
   denominación. */
```

Procedemos a escribir su firma. En este caso, llamaremos a la función `sumaMonedas`. La función recibe cinco números que representan el total de monedas de cada denominación. Son números enteros, por lo tanto, usaremos el tipo de dato `int`. La salida debe ser de tipo `float` debido a los decimales de las monedas de 50 centavos.

```c
/* Función que calcula el total de dinero a partir del número de monedas de cada 
   denominación. */
float sumaMonedas(int a, int b, int c, int d, int e)
{
   
}
```

Algunos casos de prueba podrían ser:

- `sumaMonedas(1,1,1,1,1) = 18.5`
- `sumaMonedas(0,1,2,3,4) = 59`
- `sumaMonedas(0,0,0,1,2) = 25`

Finalmente, añadimos el cuerpo de la función, es decir, las instrucciones de lo que debe realizar.

```c
/* Función que calcula el total de dinero a partir del número de monedas de cada 
   denominación. */
float sumaMonedas(int a, int b, int c, int d, int e)
{
   return (a * 0.5) + b + (c * 2) + (d * 5) + (e * 10);
}
```

Ahora, integramos esta función en un programa que interactúe con el usuario, pidiendo los tres números desde teclado.

[`monedas.c`](codigos/monedas.c)
```c
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
```

Nota cómo se utiliza la función `sumaMonedas`. Debe colocarse el nombre de la función y cinco valores para ejecutar la función.

Ejemplo de ejecución

```
Introduce el número de monedas de 0.50 centavos: 1
Introduce el número de monedas de 1 peso: 1
Introduce el número de monedas de 2 pesos: 1
Introduce el número de monedas de 5 pesos: 1
Introduce el número de monedas de 10 pesos: 1

El total es: 18.5
```

[`Anterior`](../ejemplo01/README.md) | [`Siguiente`](../ejemplo03/README.md)   

</div>
