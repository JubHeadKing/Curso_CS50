#include <stdio.h>
#include <cs50.h>

int main ()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = get_int("Ingrese los numeros: ");
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int f = 0; f < 3; f++)
        {
            printf("%d ", a[f][k]);
        }
        printf("\n");
    }

    return 0;
}