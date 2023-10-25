#include <stdio.h>
#include <string.h>

char completo [80];
char nombre[32] = "Pedro";
char apellidos [32] = "Medario Arenas";

int main ()
{
  /* Construye el nombre completo */

  strcpy ( completo, nombre );	/* completo <- "Pedro" */
  strcat ( completo, " ");	  	/* completo <- "Pedro " */
  strcat ( completo, apellidos );	/* completo <- "Pedro Medario Arenas" */

  printf ( "El nombre completo es %s\n", completo );

}