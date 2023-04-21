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

#include "funciones.h"
#include "polinomio.h"

//===========================================================================================
// Variables Globales
//===========================================================================================

//===========================================================================================
// Declaración de Funciones
//===========================================================================================

int getPolinomio(int *vect);
void printPolinomio(int vec[], int grado);
void multPolinomio(int grado, int vecA[], int vecB[], int Res[]);

int main()
{
  int grado1, grado2, aux = 0, temp;
  int vec1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int vec2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  int *punteroV1;
  int *punteroV2;
  punteroV1 = &vec1[0];
  punteroV2 = &vec2[0];

  grado1 = getPolinomio(punteroV1);
  grado2 = getPolinomio(punteroV2);


  int coef[grado1 + grado2];
  printf("\n\nLos polinomios a multiplicar son:\n");
  printPolinomio(vec1, grado1);
  printPolinomio(vec2, grado2);

  printf("\n");

  multPolinomio(grado1 + grado2, vec1, vec2, coef);
  printf("Resultado:\n");
  printPolinomio(coef, grado1 + grado2);

  getch();
}





