#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string argv[]);
void rotate(string c, int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./caesar key\n");
        printf("%d\n", argc);
        return 1;
    }
    if (only_digits(argv) == false)
    {
        return 1;
    }

    int k = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext: ");


    printf("ciphertext: ");
    rotate(plaintext, k);

    return 0;
}

bool only_digits(string argv[])
{
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("./caesar key\n");
            return false;
        }
    }
    printf("\n");
    return true;
}

void rotate(string c, int n)
{
    for (int j = 0; j < strlen(c); j++)
    {
        if (!isalpha(c[j]))
        {
            printf("%c", c[j]);
        }
        else if (isupper(c[j]))
        {
            int ascii_mayusclula = isupper(c[j]) ? 65 : 97;
            int pi = c[j] - ascii_mayusclula;
            int Ti = (pi + n) % 26;
            printf("%c", (Ti + ascii_mayusclula));
        }
        else if (islower(c[j]))
        {
            int ascii_minuscula = islower(c[j]) ? 97 : 132;
            int po = c[j] - ascii_minuscula;
            int To = (po + n) % 26;
            printf("%c", (To + ascii_minuscula));
        }
    }
    printf("\n");
}