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

double media(int numDatos)
{
    
    double prom=0.0;
    for (int i = 0; i < numDatos; i++)
    {
        prom += array[i];
    }
    prom = prom / numDatos;
    return prom;
}

/*
float vari(int n)
{
    int cont;
    float resultado = 0, pm;
    pm = prom(n);
    for (cont = 1; cont <= n; cont++)
    {
        resultado += (pow((a[cont] - pm), 2));
    }
    resultado /= n;
    return resultado;
}

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