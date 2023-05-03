//#include "array.h"


int getPolinomio(float *vect){
  int grado;
  do{
    printf("Introduce el grado del polinomio:\n");
    scanf("%i", &grado);
    if (grado < 0){
      printf("\nError: Grado del polinomio no valido\n\n");
      continue;
    }
    printf("Introduce los coeficientes del polinomio:\n");
    for (int i = grado; i >= 0; i--){
      printf("Coeficiente de x^%i: ", i);
      scanf("%f", &vect[i]);
    }
  }while(grado < 0);
  return grado;
}

void printPolinomio(float *vec, int grado){
  for (int i = grado; i >= 0; i--){//grado
    printf("%.2f x^%i\t", vec[i], i);
  }
  printf("\n");
}

void printPolinomio2(float *vec, int grado){
  for (int i = 0  ; i >= grado; i++){//grado
    printf("%.2f ", vec[i]);
  }
  printf("\n");
}

float * multPolinomio(int grado, float *vecA, float *vecB, float *coef){
  int k, j, temp;
  for (k = 0; k <= grado; k++){
    temp = 0;
    for (j = 0; j <= k; j++){
      temp = temp + (vecA[j] * vecB[k - j]);
    }
    coef[k] = temp;
  }
  return coef;
}
