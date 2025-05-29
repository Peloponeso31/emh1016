#include <stdio.h>

// Enteros
// Numeros con punto decimal
// Texto

typedef struct persona {
    char * nombre;
    char * apellido;
    double edad;
    struct persona * amigo;
} persona;

int main()
{
    persona brandon = {
        .nombre = "Brandon",
        .apellido = "Acosta",
        .edad = 24.0
    };

    persona gerardo = {
        .nombre = "Gerardo",
        .apellido = "Mercado",
        .edad = 21.0,
        .amigo = &brandon
    };

    persona hugo = {
        .nombre = "Hugo",
        .apellido = "Aguilar de Santiago",
        .edad = 26.9,
        .amigo = &gerardo
    };

    printf("Nombre:   %s\n", gerardo.nombre);
    printf("Apellido: %s\n", gerardo.apellido);
    printf("Edad:     %f\n", gerardo.edad);

    printf("\n");
    printf("Amigo de Gerardo: \n");
    printf("Nombre:   %s\n", gerardo.amigo->nombre);
    printf("Apellido: %s\n", gerardo.amigo->apellido);
    printf("Edad:     %f\n", gerardo.amigo->edad);

    return 0;
}