#include <stdio.h>

int main (void)
    {
        int a = 0;
        printf ("Ingrese Un numero del 1 al 3\n");
        scanf ("%d", &a);
       switch (a)
       {
           case 1 : printf ("a\n");break;
           case 2 : printf ("b\n");break;
           case 3 : printf ("c\n");break;
           default: printf ("D\n"); break;
       }

    return 0;
}