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
void ListarPolinomio(int vec[], int grado);
void MultPolinomio(int grado, int vecA[], int vecB[], int Res[]);

int main()
{
  int grado1, grado2, i, k, j, aux = 0, temp;
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
  ListarPolinomio(vec1, grado1);
  ListarPolinomio(vec2, grado2);

  printf("\n");

  MultPolinomio(grado1 + grado2, vec1, vec2, coef);
  printf("Resultado:\n");
  ListarPolinomio(coef, grado1 + grado2);

  getch();
}



void ListarPolinomio(int vec[], int grado)
{
  int i;
  for (i = grado; i >= 0; i--)
  {
    printf("%i x^%i\t", vec[i], i);
  }
  printf("\n");
}

void MultPolinomio(int grado, int vecA[], int vecB[], int Res[])
{
  int k, j, temp;
  for (k = 0; k <= grado; k++)
  {
    temp = 0;
    for (j = 0; j <= k; j++)
    {
      temp = temp + (vecA[j] * vecB[k - j]);
    }
    Res[k] = temp;
  }
}
