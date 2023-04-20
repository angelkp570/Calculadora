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
//===========================================================================================

//===========================================================================================
// Librerias
//===========================================================================================
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "funciones.h"
#include "menus.h"
//===========================================================================================
// Variables Globales
//===========================================================================================


//===========================================================================================
// Declaración de Funciones
//===========================================================================================

int menuPrincipal();
int menuEstadistica();
  
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
            printf("\nConstruccion de la funcion Media");
            break;
          case 2:            
            printf("\nConstruccion de la funcion Varianza");
            break;
          case 3:            
            printf("\nConstruccion de la funcion Desviacion Estandar");
            break;
          case 0:
            printf("bye :) !!!");
            break;
        }
        break;
      case 2:
        printf("\nConstruccion de la funcion Polinomios");
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
