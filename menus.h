int menuPrincipal()
{
  int opc;
  do{
    printf("\n\n1. Estadistica basica\n");
    printf("2. Multiplicacion de polinomios\n");
    printf("3. Factorial\n");
    printf("0. Salir\n");
    scanf("%i", &opc);
    if (opc < 0 || opc > 3){
      printf("Opcion no valida\n");
    }
  }while(opc < 0 || opc > 3);
  return opc;
}

int menuEstadistica()
{
  int opc;
  do{
    printf("1. Media aritmetica\n");
    printf("2. Varianza\n");
    printf("3. Desviacion estandar\n");
    printf("0. Salir\n");
    scanf("%i", &opc);
    if (opc < 0 || opc > 3){
      printf("Opcion no valida\n");
    }
  } while (opc < 0 || opc > 3);
  return opc;
}