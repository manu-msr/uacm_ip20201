[`Introducción a la Programación`](../README.md) > [`Sesión 9`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Longitud de números

<div style="text-align: justify;">

### 1. Objetivos :dart:

- Poner en práctica el uso de la estructura de repetición `for`

### 2. Requisitos :clipboard:

1. Compilador de __C__ instalado

### 3. Desarrollo :rocket:

Se necesita un programa que dado un número entero mayor o igual a cero, calcule la longitud de dicho número. Por ejemplo, si se proporciona el 1729, el programa debe regresar 4.

#### Definición del problema
Es clara.

#### Análisis del problema
- Entrada: Un número entero mayor o igual a cero.
- Salida: Longitud del número
- Proceso: 
   - Pedir datos al usuario
   - Calcular la longitud del número
   - Mostrar resultado

#### Diseño de la solución del problema
<img src="imagenes/imagen1.png" width="250" height="600" align="right">

1. Inicio
2. Imprimir "Introduce un número: "
3. Leer n
4. aux = 1
5. i = n
6. Mientras i < 9, ve al paso 7
7. aux = aux + 1
8. i = i/10
9. Vuelve al paso 6
10. Imprimir "Longitud: " + aux
11. Fin


#### Desarrollo de la solución del problema

```c
#include <stdio.h>

int main(void)
{
   int n;

   printf("Introduce un número: ");
   scanf("%d", &n);

   int aux = 1;
   
   for (int i = n; i > 9; i /= 10) 
   {
      aux++;
   }

   printf("La longitud es: %d", aux);
   return 0;
}

```

[`Anterior`](../Readme.md#estructura-while) | [`Siguiente`](../ejemplo02/README.md)   

</div>
