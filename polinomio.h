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
    for (int i = 0; i <= grado; i++){
      printf("Coeficiente de x^%i: ", i);
      scanf("%i", &vect[i]);
    }
  }while(grado < 0);
  return grado;
}