#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string n = get_string("Ingrese su nombre: ");
    printf("Hello, %s\n", n);
}