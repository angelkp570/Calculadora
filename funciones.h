double array[100];

int getData(){
  int cont, resp, respp, n;
  // char resp;
  printf("Conoce la cantidad de datos?1/0");
  scanf("%d", &resp);

  if (resp == 1)
  {
      printf("\n\nIngrese el numero de datos:\t");
      scanf("%d", &n);
      printf("\n\nIngrese datos:");
      for (cont = 0; cont < n; cont++)
      {
          printf("\n%d.- ", cont);
          scanf("%lf", &array[cont]);
      }
  }

  if (resp == 0)
  {
      n = 0;
      printf("\n");
      do
      {
          n += 1;
          printf("\nIngrese el valor %d:\n", n);
          scanf("%f", &array[n]);
          printf("Desea agregar otro valor?(1/0)");
          scanf("%d", &respp);
      } while (respp == 1);
  }
  return n;
}

double media(int numDatos){
  double prom = 0.0;
  for (int i = 0; i < numDatos; i++){
    prom += array[i];
  }
  return prom / numDatos;
}

double varianza(int numDatos){
  double resultado = 0.0, x;
  x = media(numDatos);
  for (int i = 0; i < numDatos; i++){
    resultado += (pow((array[i] - x), 2));
  }
  return pow(resultado / (numDatos - 1), 0.5);
}
/*


int fact(int n)
{
    int cont, fac = 1;
    for (cont = 1; cont <= n; cont++)
    {
        fac = fac * cont;
    }
    return fac;
}
*/