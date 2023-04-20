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
  printf("La media es: %.3lf", media(getData()));

  printf("La varianza es: %.3lf", varianza(getData()));
/*
    int Op, x, z;
    float med, var, estan, dis, y;

    printf("TERCER TRABAJO FINAL\n\n");
    do
    {
        Op = MenuPrincipal();

        switch (Op)
        {
        case 1:
            Op = MenuEstadistica();

            switch (Op)
            {
            case 1:
                menu(1);
                x = datos(x);
                menu(1);
                med = prom(x);
                printf("\n\nLa Media es: %f", med);
                break;
            case 2:
                menu(2);
                x = datos(x);
                menu(2);
                var = vari(x);
                printf("\n\nLa Varianza es: %f", var);
                break;
            case 3:
                menu(3);
                x = datos(x);
                menu(3);
                estan = sqrt(vari(x));
                printf("\nLa devicion estandar es: %f", estan);
                break;
            }
            break;
        case 2:
            break;
        case 3:
            menu(5);
            printf("Ingrese El numero:\t");
            scanf("%d", &x);
            x = fact(x);
            menu(5);
            printf("El Factorial es:%d", x);
            break;
        }
    } while (Op != 0);
    getch();
*/
    return 0;
}


