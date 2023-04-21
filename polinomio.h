int getPolinomio(int *vect){
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
      scanf("%i", &vect[i]);
    }
  }while(grado < 0);
  return grado;
}

void printPolinomio(int vec[], int grado){
  for (int i = grado; i >= 0; i--){//grado
    printf("%i x^%i\t", vec[i], i);
  }
  printf("\n");
}

void multPolinomio(int grado, int vecA[], int vecB[], int Res[]){
  int k, j, temp;
  for (k = 0; k <= grado; k++){
    temp = 0;
    for (j = 0; j <= k; j++){
      temp = temp + (vecA[j] * vecB[k - j]);
    }
    Res[k] = temp;
  }
}
