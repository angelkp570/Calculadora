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

//===========================================================================================
// Variables Globales
//===========================================================================================


//===========================================================================================
// Declaración de Funciones
//===========================================================================================



void LeerPolinomio(int grado,int vect[]);
void ListarPolinomio(int vec[],int grado);
void MultPolinomio(int grado,int vecA[],int vecB[],int Res[]);

int main(){
       int grado1,grado2,i,k,j,aux=0,temp;
       int vec1[10]={0,0,0,0,0,0,0,0,0,0};
       int vec2[10]={0,0,0,0,0,0,0,0,0,0};
       
       do{
          printf("Introduce el grado del primer polinomio:\n");
          scanf("%i",&grado1);       
          LeerPolinomio(grado1,vec1);
       }while(grado1<0);
       
       
       do{
          printf("\n\nIntroduce el grado del segundo polinomio:\n");
          scanf("%i",&grado2);       
          LeerPolinomio(grado2,vec2);
       }while(grado2<0);
       
       int coef[grado1+grado2];
       printf("\n\nLos polinomios a multiplicar son:\n");
       ListarPolinomio(vec1,grado1);
       ListarPolinomio(vec2,grado2);
     
       printf("\n");
       
       MultPolinomio(grado1+grado2,vec1,vec2,coef);
       printf("Resultado:\n");      
       ListarPolinomio(coef,grado1+grado2);
             
       getch();
}
       
void LeerPolinomio(int grado,int vect[]){
     int i;
     if(grado<0){
          printf("\nError: Grado del polinomio no valido\n\n");
          return;
       }
     printf("Introduce los coeficientes del polinomio:\n");
     for(i=0;i<=grado;i++){
           printf("Coeficiente de x^%i: ",i);
           scanf("%i",&vect[i]);
     }
}

void ListarPolinomio(int vec[],int grado){
     int i;
     for(i=grado;i>=0;i--){
         printf("%i x^%i\t",vec[i],i);
     }
     printf("\n");
}
		
void MultPolinomio(int grado,int vecA[],int vecB[],int Res[]){
     int k,j,temp;
     for( k = 0; k <= grado; k++){             
             temp=0;
             for( j = 0; j <= k; j++){
                 temp=temp+(vecA[j]*vecB[k-j]);                 
             }
             Res[k]=temp;            
     }
}



