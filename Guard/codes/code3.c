#include <stdio.h>

int main ()
    {
        int a = 0;
        int c = 0;
        int b = 0;
        printf ("Ingrese Un numero del 10 al 100\n");
        scanf ("%d", &a);
        for (int i = 0; i<13; i++)
        {
           c=a*b;
           b++;
           printf ("%i \n", c );
        }

    return 0;
}