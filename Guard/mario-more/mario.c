#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;
    int p = 0;
    do
    {
        n = get_int("Ingrese la Altura: ");
    }
    while (n < 1 || n > 8);
    p = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < p ; j++)
        {
            printf(" ");
        }
        p--;
        switch (i)
        {
            case 0 :
                printf("#  #\n");
                break;
            case 1 :
                printf("##  ##\n");
                break;
            case 2 :
                printf("###  ###\n");
                break;
            case 3 :
                printf("####  ####\n");
                break;
            case 4 :
                printf("#####  #####\n");
                break;
            case 5 :
                printf("######  ######\n");
                break;
            case 6 :
                printf("#######  #######\n");
                break;
            case 7 :
                printf("########  ########\n");
                break;
        }
    }
}