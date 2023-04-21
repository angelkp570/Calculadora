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
#include <stdbool.h>
#include "funciones.h"

//===========================================================================================
// Variables Globales
//===========================================================================================
float a[80];


//===========================================================================================
// Declaración de Funciones
//===========================================================================================
int getData();
double media(int numeroDatos);
double varianza(int numeroDatos);
//float vari();
//int fact();
//float poi(int n, float m);


int main(){
  //int numDatos;
  //numDatos = getData();
  printf("La media es: %.3lf\n", media(getData()));

  printf("La varianza muestral es: %.3lf\n", varianza(getData()));

  printf("La desviacion estandar muestral es: %.3lf\n", desvEst(getData()));
  return 0;
}


