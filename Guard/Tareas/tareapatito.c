
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

typedef struct Agendas {
    string Nombre;
    string Direccion;
    int Numero;
    string Correo;
    int Codigo;
}Agenda;

void Agregar (Agenda registrar[12], int cantAgenda);
void Mostrar (Agenda Mostrar[12], int cantAgenda);
void Buscar (Agenda Buscar[12], int cantAgenda);
void Editar (Agenda Editar[12], int cantAgenda);
Agenda agenda[12];

int main ()
{
    string contra;
    string user;
    do
    {
        user = get_string("Ingrese el usuario: ");
        contra = get_string("Ingrese la contraseña: ");
    }while (strcmp("1234Admin",contra) != 0 || strcmp("admin",user) != 0);

    int cantAgenda = 0;
    do
    {
       cantAgenda = get_int("Cuanto desea agendar: ");
    }while (cantAgenda < 1 || cantAgenda > 12);

    char a;
    do
    {
    a = get_char("Agregar Información (A) Buscar Información (B) Editar Informacion (E) Mostrar todos los datos (M) Cerrar (C) \n");
    printf("\n");
    switch (a)
    {
    case 'A' : Agregar(agenda, cantAgenda);
              break;
    case 'B' : Buscar (agenda, cantAgenda);
              break;
    case 'E' : Editar (agenda, cantAgenda);
              break;
    case 'M' : Mostrar(agenda, cantAgenda);
              break;
    case 'C' : printf("Sayonaaadraaaaaaaa ;')\n");
              break;
    default:
              break;
    }
    }while (a != 'C');

    return 0;
}

void Agregar (Agenda registrar[12], int cantAgenda)
{
    char a;
    string c = "";

    for  (int i = 0; i < cantAgenda; i++)
    {
        if (registrar[i].Numero == 0)
        {
            do
            {
                registrar[i].Nombre = get_string("Nombre: ");
            }while(strcmp(registrar[i].Nombre, c) == 0);
            do
            {
                registrar[i].Direccion = get_string("Direccion: ");
            }while(strcmp(registrar[i].Direccion, c) == 0);
                registrar[i].Numero = get_int("Numero : ");
                registrar[i].Correo = get_string("Correo: ");
                registrar[i].Codigo = get_int("Codigo: ");
            if (i + 1 < cantAgenda)
            {
                int  b = 0;
                while(b == 0)
                {
                    a = get_char("Desea Seguir ingresando? Y/N\n");
                    if (a == 'N')
                    {
                        i = cantAgenda;
                        b = 1;

                    }
                    else if (a == 'Y')
                    {
                        b = 1;
                    }
                    else
                    {
                        b = 0;
                    }
                }
            }
        }
        else
        {
            printf("Agenda %d llena\n", i + 1);
        }
    }
    printf("\n");
}
void Mostrar (Agenda Mostrar[12], int cantAgenda)
{
    string c = "";
    for  (int i = 0; i < cantAgenda; i++)
    {
        printf("Agenda %d\n", i + 1);
        if (Mostrar[i].Nombre == NULL)
        {
            printf("N/E\n");
        }
        else
        {
            printf("%s\n", Mostrar[i].Nombre);
        }
        if (Mostrar[i].Direccion == NULL)
        {
            printf("N/E\n");
        }
        else
        {
            printf("%s\n", Mostrar[i].Direccion);
        }
        if (Mostrar[i].Numero == 0)
        {
            printf("N/E\n");
        }
        else
        {
            printf("+ %d\n", Mostrar[i].Numero);
        }
        if (Mostrar[i].Correo == NULL)
        {
            printf("N/E\n");
        }
        else if (strcmp(Mostrar[i].Correo, c) == 0)
        {
            printf("N/E\n");
        }
        else
        {
            printf("%s\n", Mostrar[i].Correo);
        }

        if (Mostrar[i].Codigo == 0)
        {
            printf("N/E\n");
        }
        else
        {
            printf("%d\n", Mostrar[i].Codigo);
        }
        printf("\n");
    }
}

void Buscar (Agenda Buscar[12], int cantAgenda)
{
    char a = 'Y';

    while (a == 'Y')
    {
        int cel = get_int("Digite el Numero celular: ");
        char band = 'F';
        int i = 0;

        while ((band == 'F') && (i < cantAgenda))
        {
            if (cel == 0)
            {
            }
            else if (cel == Buscar[i].Numero)
            {
                band = 'V';
            }
                i++;
        }
        if (band == 'F')
        {
            printf("El numero no existe\n");
        }
        else if (band == 'V')
        {
            printf("Encontrado\n");
            printf("%s\n", Buscar[i - 1].Nombre);
            printf("%s\n", Buscar[i - 1].Direccion);
            printf("+ %d\n", Buscar[i - 1].Numero);
            printf("%s\n", Buscar[i - 1].Correo);
            printf("%d\n", Buscar[i - 1].Codigo);
        }
        printf("\n");
        a = get_char("Desea Seguir Buscando? Y/N\n");
    }
}

void Editar (Agenda Editar[12], int cantAgenda)
{
    char b = 'Y';
    string c = "";

    while (b == 'Y' )
    {
        string Nom = get_string("Digite el Nombre: ");
        char band = 'F';
        int i = 0;

        while ((band == 'F') && (i < cantAgenda))
        {
            if (strcmp(Nom, Editar[i].Nombre) == 0)
            {
                band = 'V';
            }
            i++;
        }
        if (band == 'F')
        {
            printf("El Nombre no existe\n");
        }
        else if (band == 'V')
        {
        do
        {
            Editar[i - 1].Nombre = get_string("Nombre: ");
        }while(strcmp(Editar[i - 1].Nombre, c) == 0);
        do
        {
            Editar[i - 1].Direccion = get_string("Direccion: ");
        }while(strcmp(Editar[i - 1].Direccion, c) == 0);
        Editar[i - 1].Numero = get_int("Numero: ");
        Editar[i - 1].Correo = get_string("Correo: ");
        Editar[i - 1].Codigo = get_int("Codigo: ");
    }
    printf("\n");
    b = get_char("Desea Seguir Editando? Y/N\n");
    }
}
