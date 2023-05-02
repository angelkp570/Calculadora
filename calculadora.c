//===========================================================================================
// Programa: Presente en pantalla un menú con las siguientes opciones:
//           1. Estadística básica
//           2. Multiplicación de polinomios
//           3. (Libre)
//           0. Salir
//           Selecciona una opción:
//           - Si el usuario selecciona 1, el programa solicitará una serie de datos para
//           trabajar y obtendrá la media aritmética, varianza y desviación estándar de
//           los mismos.
//           - Si elige 2, el programa solicitará el grado de los dos polinomios (diferentes),
//           estableciendo los límites para los mismos (puede incluir el grado 0).
//           Si se introducen datos válidos, el programa realizará la multiplicación, mostrará
//           el resultado con formato de polinomio
// Autor:    Luis Angel Hernández Pascual
// Fecha:
//===========================================================================================

//===========================================================================================
// Librerias
//===========================================================================================
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <errno.h>

#include "funciones.h"
#include "polinomio.h"
#include "array.h"

//===========================================================================================
// Variables Globales
//===========================================================================================

//===========================================================================================
// Declaración de Funciones
//===========================================================================================

int getPolinomio(float *vect);
void printPolinomio(float *vec, int grado);
void multPolinomio(int grado, float *vecA, float *vecB, float Res[]);

void printPolinomio2(float *vec, int grado);
float * memoriaArray(int len);

int main()
{
  int grado1, grado2, aux = 0, temp;
  //===========================================================
  float *array1, *array2;
  array1 = memoriaArray(5);
  array2 = memoriaArray(5);
  size_t len =((&array1)[1] - array1);
  printf("%d \n", len);
  printPolinomio2(array1, 4);
  //===========================================================

  grado1 = getPolinomio(array1);
  grado2 = getPolinomio(array2);


  float coef[grado1 + grado2];
  printf("\n\nLos polinomios a multiplicar son:\n");
  printPolinomio(array1, grado1);
  printPolinomio(array2, grado2);

  printf("\n");

  multPolinomio(grado1 + grado2, array1, array2, coef);
  printf("Resultado:\n");
  printPolinomio(coef, grado1 + grado2);

  freeMemory(array1);
  freeMemory(array2);
  getch();
}





