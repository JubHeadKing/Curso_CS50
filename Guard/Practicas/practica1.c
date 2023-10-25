#include <stdio.h>
#include <cs50.h>

int main ()
{
int n = 0;

    while (n<1)
    {
        n = get_int("Ingrese una cantidad:");
    }
    for (int i = 0; i<n; i++)
    {
    printf("XD ");
    }
    printf("\n");
    return 0;
}