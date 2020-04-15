#include <stdio.h>
#include <math.h>

// Definición de prototipos.
void mostrarResultados(int,float);
char pedirOpcion();
float perimetro(int,float);
float areaTriangulo(float);
float areaCuadrado(float);
float areaPoligonoR(int,float);
float semiPerimetro(float);
float apotema(int,float);
int numeroDiagonales(int);

// Módulo principal
int main(void)
{
   // Número de lados de la figura.
   int n;
   // Medida de los lados de la figura.
   float m;
   // Opción para mantener el programa en ejecución.
   char o;

   do
   {
      printf("Introduce el número de lados: ");
      scanf("%d", &n);
      printf("Introduce la medida de los lados: ");
      scanf("%f", &m);

      mostrarResultados(n,m);

      o = pedirOpcion();
   } while (o != 'n');

   return 0;
}

/* Función encargada de mostrar los resultados del programa a partir del número
   de lados del polígono y la medida de éstos. */
void mostrarResultados(int n, float m)
{ 
   if (n < 3)
      printf("\nDatos inválidos\n");
   else if (n == 3)
   {
      printf("\nPerímetro: %f\n", perimetro(n,m));
      printf("\nÁrea: %f\n", areaTriangulo(m));
   } else if (n == 4)
   {
      printf("\nPerímetro: %f\n", perimetro(n,m));
      printf("\nÁrea: %f\n", areaCuadrado(m));
   } else {
      printf("\nPerímetro: %f\n", perimetro(n,m));
      printf("\nÁrea: %f\n", areaPoligonoR(n,m));
   }
}

/* Función encargada de preguntar al usuario si desea calcular el perímetro y
   área de otro polígono. */
char pedirOpcion() 
{
   char opcion;
   do
   {
      printf("\n¿Desea analizar otro polígono regular? (s/n): ");
      scanf(" %c", &opcion);
   } while (opcion != 's' && opcion != 'n');
   printf("\n");
   return opcion;
}

/* Función que calcula el perímetro de un polígono regular. */
float perimetro(int n, float m) 
{
   return n * m;
}

/* Función que calcula el área de un triángulo. */
float areaTriangulo(float m)
{
   float s = semiPerimetro(m);
   return sqrt(s*(s-m)*(s-m)*(s-m));
}

/* Función que calcula el área de un cuadrado. */
float areaCuadrado(float m)
{
   return pow(m,2);
}

/* Función que calcula el área de un polígono regular en función de su 
   apotema. */
float areaPoligonoR(int n, float m)
{
   float a = apotema(n,m);
   float p = perimetro(n,m);

   return (p*a)/2;
}

/* Función que calcula el semiperímetro de un triángulo. */
float semiPerimetro(float m)
{
   return (m*3)/2;
}

/* Función que calcula el apotema de un polígono regular. */
float apotema(int n, float m)
{
   float alpha = 360/n;
   return n / (2*tan(alpha/2));
}

/* Función que obtiene el número de diagonales de un polígono regular. */
int numeroDiagonales(int n)
{
	// Aquí va su código.
}
