# include <stdio.h>
# include <cs50.h>

int main ()

{
    int a = 0;
    a = get_int ("Ingrese Un numero del 10 al 100\n");

    if (a > 10 && a < 100)
    {
        printf ("Es mayor que 10 y menor que 100\n");
    }
    else
    {
        printf ("Error, intente de nuevo\n");
    }
 return 0;
}
