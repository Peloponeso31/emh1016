#include <stdio.h>

int main()
{
    // Es un contenedor donde puedo guardar varias cosas
    // indice          0  1  2  3  4  5
    int arreglo [6] = {1, 2, 3, 4, 5, 6};
    int acumulador = 0;

    //arreglo[5] = 99;

    for (int i = 0; i<6; i++)
    {
        acumulador = acumulador + arreglo[i];
        printf("arreglo[%d] = %d\n", i, arreglo[i]);
    }

    printf("El total de los valores es: %d\n", acumulador);
}