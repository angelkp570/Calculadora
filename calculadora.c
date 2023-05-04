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
#include <stdlib.h>
#include <errno.h>

#include "funciones.h"
#include "menus.h"
#include "polinomio.h"
#include "array.h"

//===========================================================================================
// Variables Globales
//===========================================================================================
int size = 5;

//===========================================================================================
// Declaración de Funciones
//===========================================================================================

int menuPrincipal();
int menuEstadistica();

int getData();
double media(int numeroDatos);
double varianza(int numeroDatos);

int getPolinomio(float *vect);
void printPolinomio(float *vec, int grado);
float * multPolinomio(int grado, float *vecA, float *vecB , float *coef);

void printPolinomio2(float *vec, int grado);
float * memoriaArray(int len);


int main(){
  int opcion;
  printf("===============================\n");
  printf("\tCalculadora\n");
  printf("===============================");
  do{
    opcion = menuPrincipal();
    switch (opcion){
      case 1:
        opcion = menuEstadistica();
        switch (opcion){
          case 1:
            printf("La media es: %.3lf\n", media(getData()));
            break;
          case 2:            
            printf("La varianza muestral es: %.3lf\n", varianza(getData()));
            break;
          case 3:            
            printf("La desviacion estandar muestral es: %.3lf\n", desvEst(getData()));
            break;
          case 0:
            printf("bye :) !!!");
            break;
        }
        break;
      case 2:
        ;        
        //===========================================================
        int grado1, grado2;
        float *array1, *array2;
        float *coeficientes;
        array1 = memoriaArray(size);
        array2 = memoriaArray(size);        
        //===========================================================

        grado1 = getPolinomio(array1);
        grado2 = getPolinomio(array2);
        
        coeficientes = memoriaArray(grado1 + grado2);
        printf("\n\nLos polinomios a multiplicar son:\n");
        printPolinomio(array1, grado1);
        printPolinomio(array2, grado2);

        printf("\n");

        coeficientes = multPolinomio(grado1 + grado2, array1, array2, coeficientes);
        printf("Resultado:\n");
        printPolinomio(coeficientes, grado1 + grado2);
        freeMemory(array1);
        freeMemory(array2);
        freeMemory(coeficientes);
                
        break;
      case 3:
        printf("\nConstruccion de la funcion Libre");
        break;
      case 0:
            printf("bye :) !!!");
            break;
    }
  }while (opcion != 0);
  getch();
  return 0;
}


