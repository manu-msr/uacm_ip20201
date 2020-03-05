[`Introducción a la Programación`](../../README.md) > [`Sesión 04`](../README.md) > `Ejemplo 01`

## Ejemplo 1: Operaciones de salida

Las operaciones de salida, juegan un papel fundamental en todo programa, pues son la forma que tenemos de interactuar con el usuario. En este ejemplo escribiremos un programa que imprima una pirámide de 5 pisos en pantalla. Salida final del programa queda de la siguiente manera:

```bash
    *
   ***
  *****
 *******
*********
```

Lo primero que haremos será cargar la biblioteca `stdio.h` que incluye funciones de entrada y salida. Para incluir una biblioteca, debemos usar la primitiva `#include`.

```c
#include <stdio,h>
```

Ahora, dado que nuestro programa debe ejecutarse y todos los programas ejecutables deben incluir la definición de una función `main`, agregaremos esta definición.

Recuerda que esta función debe regresar un número indicando si el programa se ejecutó correctamente o no. En nuestro caso regresaremos 0 pues no estamos realizando ningún proceso complejo que deba reportar una falla.

```c
#include <stdio.h>

int main(void)
{
   return 0;
}
```

Ahora comenzaremos a dibujar la pirámide. Para imprimir texto en la pantalla se hace uso de la función `printf`. Esta función recibe una cadena de texto. Recuerda que una cadena es una secuencia de caracteres y debe delimitarse por comillas dobles `"`. Se pueden incluir saltos de linea o tabuladores en una cadena mediante el uso de secuencias de escape. En __C__ tenemos las siguientes secuencias:

| Secuencia | Descripción                                                          |
| --------- | -------------------------------------------------------------------- |
| `\n`      | Salto de línea. Posiciona el cursor al inicio de la siguiente línea. |
| `\t`      | Tabulador. Mueve el cursor a la siguiente posición del tabulador.    |
| `\a`      | Alerta. Hace sonar la alerta del sistema.                            |
| `\\`      | Diagonal invertida. Inserta una diagonal invertida en la cadena.     |
| `\"`      | Comilla doble. Inserta una comilla doble en la cadena.               | 

Para imprimir la pirámide veremos dos formas, una utilizando instrucciones `printf` simples con saltos de línea y otra usando una única cadena con saltos de línea `\n`. Añadimos comentarios descriptivos al código.

**Mediante `printf`**

```c
#include <stdio.h>

/* Programa que imprime una pirámide de cinco niveles. */

int main(void)
{
   // Impresión de cadenas.
   printf("    *    \n");
   printf("   ***   \n");
   printf("  *****  \n");
   printf(" ******* \n");
   printf("*********\n");
   
   system("pause"); // para DevC++
   return 0;
}
```

**Mediante saltos de línea**

```c
#include <stdio.h>

/* Programa que imprime una pirámide de cinco niveles. */

int main(void)
{
   // Impresión de cadenas.
   printf("    *    \n   ***   \n  *****  \n ******* \n*********\n");
   
   system("pause"); // para DevC++
   return 0;
}
```

Puedes descargar los códigos [aquí](codigos/).
