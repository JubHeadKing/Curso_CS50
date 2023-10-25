#include <stdio.h>

int main (void)
    {
        char a;
        printf ("Digite una letra 'r', 'b','a\n");
        scanf ("%c", &a);
        switch (a)
        {
            case 'r':case 'R':printf ("ROJO");break;
            case 'b':case 'B':printf ("BLANCO");break;
            case 'a':case 'A':printf ("AZUL");break;
            default:printf ("ERROR");break;
        }

    return 0;
}