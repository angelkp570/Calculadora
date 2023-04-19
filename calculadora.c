#include <stdio.h>
#include <conio.h>
#include <math.h>

float a[80];
int datos();
void menu();
// Funciones:
float prom();
float vari();
int fact();
float poi(int n, float m);
int MenuPrincipal();
int MenuEstadistica();

int main()
{
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

    return 0;
}

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

void menu(n)
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

int datos(n)
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

float prom(n)
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

float vari(n)
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

int fact(n)
{
    int cont, fac = 1;
    for (cont = 1; cont <= n; cont++)
    {
        fac = fac * cont;
    }
    return fac;
}
