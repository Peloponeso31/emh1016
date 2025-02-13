#include <stdio.h>

int main(int argc, char * argv[])
{
    // Texto "Esto es texto"
    // char = character = caracter | Letra
    char texto[] = "Esto es un texto";

    // Numeros enteros 1 2 3 4 5
    // integer = entero | numero sin punto decimal
    int entero = 7;

    // Numeros con punto decimal 3.1416 2.71
    // double | numero con punto decimal
    double pi = 3.1416;

    // s = String = cadena | Cadena de texto.
    printf("Texto: %s\n", texto);

    // d = decimal | Nuemero decimal.
    printf("Numeros enteros: %d\n", entero);

    // f = float = numero con punto flotante.
    printf("Numero con punto decimal: %f\n", pi);

    return 0;
}