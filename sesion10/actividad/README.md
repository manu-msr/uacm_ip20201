[`Introducción a la Programación`](../README.md) > [`Sesión 10`](../README.md) > `Actividad`

## Actividad 10

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica la definición de funciones.

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

Completar el cuerpo de la función `absoluto` contenida en el archivo [`actividad10.c`](codigos/actividad10.c). La función debe calcular el valor absoluto de un número. Puedes usar la siguiente fórmula:

![imagen](imagenes/imagen1.gif)

```c
#include <stdio.h>

/* Prototipos. */
int absoluto(int);

/* Función principal. */
int main(void)
{
    // Declaración de variables.

    /* Variable que almacena el número introducido por el usuario. */
    int x;

    // Pedir datos al usuario.
    printf("Introduce un número: ");
    scanf("%d", &x);

    // Mostrar resultados.
    printf("\nValor absoluto: %d\n", absoluto(x));
}

/* Función que calcula el valor absoluto de un número. */
int absoluto(int x)
{
    // Aquí va su código.
}
```

**Entrega:** 17 de abril de 2020

[`Anterior`](../README.md#3-actividad-memo) | [`Siguiente`](../README.md#3-actividad-memo)   

</div>
