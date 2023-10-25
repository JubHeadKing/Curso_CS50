#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{

    printf("%d\n", argc - 1);
    for (int i = 1; i < 5; i++)
    {
        if (argv[i] != NULL)
        {
            printf("%s ", argv[i]);
        }
        return 0;
    }
    printf("\n");

    return 0;
}