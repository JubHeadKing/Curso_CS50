#include <stdio.h>   // printf(), scanf(), fgets()
#include <stdlib.h>  // system(), atoi()
#include <string.h>  // strcspn()

int main(void)
{
    char cadena[4];

    printf("Ingresa tu edad (entero mayor que cero)\nedad = ");
    fgets(cadena, sizeof cadena, stdin);

    if (cadena[0] == '\n')
    {
        printf("Pulsaste 'enter', saliendo...\n");
    }
    else
    {
        cadena[strcspn(cadena, "\r\n")] = '\0';
        int edad = atoi(cadena);

        if (edad >= 0 && edad < 18)
        {
            printf("No puedes votar, eres menor de edad.\n");
        }
        else if (edad >= 95)
        {
            printf("Puedes votar, eres mayor de edad.\n");
        }
        else
        {
            printf("Ingresaste una edad fuera del rango.\n");
        }
    }

    system("pause > nul");
    return 0;
}