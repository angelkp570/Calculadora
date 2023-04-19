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

//===========================================================================================
// Variables Globales
//===========================================================================================
int opcion;
float a[80];

//===========================================================================================
// Declaración de Funciones
//===========================================================================================
int MenuPrincipal();
int MenuEstadistica();
void menu();
  
int main(){
  printf("===============================\n");
  printf("\tCalculadora\n");
  printf("===============================");
  do{
    opcion = MenuPrincipal();
    switch (opcion){
      case 1:
        opcion = MenuEstadistica();
        switch (opcion){
          case 1:
            menu(1);
            printf("\n\nLa Media es: ");
            break;
          case 2:
            menu(2);
            printf("\n\nLa Varianza es: ");
            break;
          case 3:
            menu(3);
            printf("\nLa devicion estandar es:");
            break;
        }
        break;
      case 2:
        break;
      case 3:
        menu(5);
        printf("El Factorial es: ");
        break;
    }
  }while (opcion != 0);
getch();
return 0;
}
