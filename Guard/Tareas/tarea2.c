/*
Hacer un programa en C para determinar el promedio de dos notas y determinar si el estudiante aprobó o no.
*/

#include <stdio.h>
#include <cs50.h>

int main ()
{
            float promedio = 0;

            float a = get_float ("Primera Nota: \n");
            float b = get_float ("Segunda Nota:  \n");

            promedio = ((a+b)/2);

            printf ("Tu promedio es: %.2f\n", promedio);
            if (promedio < 60)
            {
                printf ("Reprobaste\n");
            }else{
                printf ("Aprobaste\n");
            }
    return 0;
}