/*
Escribir un programa que realice la pregunta ¿Desea continuar S/N? y que no deje de hacerla hasta que el usuario teclee N.
*/
#include <stdio.h>
#include <cs50.h>

int main ()
{
         char a;
        do
        {
           a = get_char("Desea continuar S/N?\n");
        }
        while(a != 'N');

   return 0;
}