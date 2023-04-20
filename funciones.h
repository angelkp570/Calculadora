double array[100];
int numDatos;

int getData(){
  int respuesta;
  // char resp;

  if(numDatos == 0){
    printf("\nConoce la cantidad de datos? (1/0) ");
    scanf("%d", &respuesta);

    if (respuesta == 1){
      printf("\nIngrese el numero de datos: ");
      scanf("%d", &numDatos);
      for (int cont = 0; cont < numDatos; cont++){
        printf("Dato %d: ", cont + 1);
        scanf("%lf", &array[cont]);
      }
    }

    if (respuesta == 0){
      numDatos = 0;
      do{      
        printf("Dato %d: ", numDatos + 1);
        scanf("%lf", &array[numDatos]);
        printf("Desea agregar otro valor?(1/0) ");
        scanf("%d", &respuesta);
        numDatos++;
      }while(respuesta == 1);
    }
  }
  else{
    printf("Ocupar los datos actuales? (1/0)");
    scanf("%d", &respuesta);
    if(respuesta == 1){
      return numDatos;
    }
    else
      getData();
  }
  
  return numDatos;
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