[`Introducción a la Programación`](../README.md) > `Sesión 1`

## Sesión 1: *Von Neumann Simulator* I

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">
<div style="text-align: justify;">

### 1. Objetivos :dart:

- Usar un simulador gráfico para visualizar el procesamiento de instrucciones en la arquitectura de von Neumann.

### 2. Contenido :rocket:

---
#### <ins>Arquitectura de von Neumann</ins>
<img src="imagenes/imagen1.png" width="300" height="200" align="right">

La arquitectura de von Neumann se compone principalmente de:

- Memoria
- Unidad Central de Proceso
- Dispositivos de Entrada y Salida

Dentro de la memoria se almacenan datos e instrucciones que posteriormente son pasados a la Unidad Central de Proceso para ser ejecutadas. La Unidad de Control se encarga de administrar la ejecución y la unidad aritmético lógica de realizar las operaciones correspondientes.

---
#### <ins>Procesamiento de instrucciones</ins>
<img src="imagenes/imagen2.png" width="200" height="200" align="right">

Las instrucciones se almacenan en la memoria en un código entendible por la computadora llamado *código máquina* a un conjunto de instrucciones le llamamos *programa*. Para que un programa pueda ser ejecutado por una computadora, pasa primero por varias fases:

1. Es escrito en un lenguaje de programación de alto nivel.
1. Es traducido a código máquina o un lenguaje intermedio como un ensamblador (lenguaje de bajo nivel)
1. El ensamblador se traduce a código máquina. Esto es sencillo pues cada procesador tiene su propio lenguaje ensamblador.

*Von Neumman Simulator* permite escribir pequeños programas en un lenguaje ensamblador y mostrar cómo actúan los componentes del procesador paso a paso.

- [**`EJEMPLO 1`**](ejemplo01/README.md)

---

### 3. Actividad :memo:
Aplica lo todo lo que aprendiste durante la sesión en esta actividad. 

- [**`ACTIVIDAD 1`**](actividad/README.md)

[`Anterior`](../README.md) | [`Siguiente`](../sesion02/README.md)

</div>
