#include <stdio.h>
#include <cs50.h>

int poblacion = 0;
int finalPobla = 0;
int year = 0;
int nacen = 0;
int mueren = 0;
int main(void)
{

    do
    {
        poblacion = get_int("Ingrese el tamaño de la poblacion: \n");
    }
    while (poblacion < 9);
    do
    {
        finalPobla = get_int("Ingrese el tamaño final que desea: \n");

    }
    while (finalPobla < poblacion);

    while (poblacion < finalPobla)
    {
        nacen = poblacion / 3;
        mueren = poblacion / 4;
        poblacion = (poblacion + nacen - mueren);
        year++;
    }

    printf("Years: %d \n", year);


    return 0;
}
