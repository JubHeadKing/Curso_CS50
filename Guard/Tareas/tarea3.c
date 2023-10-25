/*
Realizar una calculadora a partir de funciones.
Primero pedir los datos y luego preguntar al usuario
que tipo de operación desea realizar (Suma, resta, multiplicación y división).
Preguntar si desea continuar, si responde S, repetir el mismo proceso.
*/

#include <stdio.h>
#include <cs50.h>

int suma (int a, int b);
int resta (int a, int b);
int multiplicacion (int a, int b);
int division (int a, int b);

int main ()
{
    int a = get_int("Primer Numero: \n");
    int b = get_int("Segundo Numero: \n");
    char c = get_char("Que desea hacer: ? S, R, M o D\n");
    switch (c)
    {
    case 'S' : printf ("%d\n",suma(a,b)); break;
    case 'R' : printf ("%d\n",resta(a,b)); break;
    case 'M' : printf ("%d\n",multiplicacion(a,b)); break;
    case 'D' : printf ("%d\n",division(a,b)); break;
    default  : break;
    }

    return 0;
}

int suma (int a, int b)
{
return (a+b);
}

int resta (int a, int b)
{
return (a-b);
}

int multiplicacion (int a, int b)
{
return (a*b);
}

int division (int a, int b)
{
return (a/b);
}
