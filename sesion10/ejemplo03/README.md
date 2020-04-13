[`Introducción a la Programación`](../README.md) > [`Sesión 10`](../README.md) > `Ejemplo 3`

## Ejemplo 3: Volumen de una esfera

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica la definición y uso de funciones.

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

Definimos ahora un programa que calcule el volumen de una esfera. Queremos en este programa que se muestre un mensaje preguntando si desea calcular nuevamente el volumen y mientras esta respuesta sea sí, mantener el programa en ejecución. Definimos una función que muestre este mensaje y una función que calcule el volumen de la esfera.

Comenzamos con la descripción de ambas funciones.

- La función que calcula el volumen requiere del radio de la esfera.

   ```c
   /* Función que calcula el volumen de una esfera a partir de su radio. */
   ```

- La función que muestra el mensaje de texto, además devuelve como resultado la respuesta del usuario.

   ```c
   /* Función que pregunta al usuario si desea continuar con la ejecución y 
      devuelve la respuesta ingresada por el mismo. */
   ```

Procedemos a escribir su firma. En este caso, llamaremos a las funciones `volumenEsfera` y `pideOpcion`. 

- La primera función recibe un único número que representa el radio de la esfera. Es un número con decimales, por lo tanto, usaremos el tipo de dato `float`. La salida también debe ser de tipo `float`.

   ```c
   /* Función que calcula el volumen de una esfera a partir de su radio. */   
   float volumenEsfera(float r)
   {
      
   }
   ```

- La segunda función no recibe parámetros pues únicamente muestra mensajes en pantalla y pide datos al usuario. La salida será un número caracter (`char`) con la respuesta del usuario.

   ```c
   /* Función que pregunta al usuario si desea continuar con la ejecución y 
      devuelve la respuesta ingresada por el mismo. */
   char pideOpcion()
   {

   }
   ```

   Es equivalente a:

   ```c
   /* Función que pregunta al usuario si desea continuar con la ejecución y 
      devuelve la respuesta ingresada por el mismo. */
   char pideOpcion(void)
   {

   }
   ```

Un caso de prueba podría ser:

- `volumenEsfera(10) = 3141.592773`

Finalmente, añadimos el cuerpo de las funciones, es decir, las instrucciones de lo que debe realizar.

```c
/* Función que calcula el volumen de una esfera a partir de su radio. */   
float volumenEsfera(float r)
{
   return 4/3 * M_PI * pow(r,3);
}
```

```c
/* Función que pregunta al usuario si desea continuar con la ejecución y 
   devuelve la respuesta ingresada por el mismo. */
char pideOpcion(void)
{
   char opcion;
   printf("\n¿Deseas calcular otro volumen? (s/n): ");
   scanf(" %c", &opcion);
   return opcion;
}
```

Ahora, integramos estas funciones en un programa que interactúe con el usuario, pidiendo los números desde teclado.

[`volumenes.c`](codigos/volumenes.c)
```c
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
   scanf("%c", &opcion);
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
```

Nota cómo se utilizan las función `volumenEsfera` y `pideOpcion`. Debe colocarse el nombre de la función y los parámetros entre paréntesis para ejecutar la función.

Ejemplo de ejecución

```
Introduce el radio de la esfera: 10

El volumen es: 3141.592773

¿Deseas calcular otro volumen? (s/n): s

Introduce el radio de la esfera: 10

El volumen es: 3141.592773

¿Deseas calcular otro volumen? (s/n): n

```

[`Anterior`](../ejemplo02/README.md) | [`Siguiente`](../ejemplo04/README.md)   

</div>
