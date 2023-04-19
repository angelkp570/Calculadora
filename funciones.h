int MenuPrincipal()
{
    int opc;
    do
    {

        printf("\n\n1. Estadistica basica\n");
        printf("2. Multiplicacion de polinomios\n");
        printf("3. Factorial\n");
        printf("0. Salir\n");
        scanf("%i", &opc);
        if (opc < 0 || opc > 3)
        {
            printf("Opcion no valida\n");
        }

    } while (opc < 0 || opc > 3);
    return opc;
}

int MenuEstadistica()
{
    int opc;
    do
    {
        printf("1. Media aritmetica\n");
        printf("2. Varianza\n");
        printf("3. Desviacion estandar\n");
        printf("0. Salir\n");
        scanf("%i", &opc);
        if (opc < 0 || opc > 3)
        {
            printf("Opcion no valida\n");
        }

    } while (opc < 0 || opc > 3);
    return opc;
}

void menu(int n)
{ // system ("cls");
    if (n == 1)
    {
        printf("\nMEDIA\n\n");
    }
    if (n == 2)
    {
        printf("\nVARIANZA\n\n");
    }
    if (n == 3)
    {
        printf("\nDESVIACION ESTANDAR\n\n");
    }
    if (n == 4)
    {
        printf("\nFactorial\n\n");
    }
}

int datos(int n)
{
    int cont, resp, respp;
    // char resp;
    printf("Conose la cantidad de datos?1/0");
    scanf("%d", &resp);

    if (resp == 1)
    {
        printf("\n\nIngrese el numero de datos:\t");
        scanf("%d", &n);
        printf("\n\nIngrese datos:");
        for (cont = 1; cont <= n; cont++)
        {
            printf("\n%d.-", cont);
            scanf("%f", &a[cont]);
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
            scanf("%f", &a[n]);
            printf("Desea agregar otro valor?(1/0)");
            scanf("%d", &respp);
        } while (respp == 1);
    }
    return n;
}

float prom(int n)
{
    int s;
    float prom;
    for (s = 1; s <= n; s++)
    {
        prom += a[s];
    }
    prom = prom / n;
    return prom;
}

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