#include <stdio.h>

int main()
{
    printf("Ciclo for:\n");
    for (int i = 0; i < 5; i++) // ++ = incrementar en 1
    {
        printf("%d,", i);
    }

    printf("\nCiclo while:\n");
    int i = 0;
    while (i<5)
    {
        printf("Hola, ");
        i++;
    }
    
    printf("\nCiclo do while:\n");
    int contador = 90;
    do
    {
        printf("%d\n", contador);
        contador++;
    }
    while (contador < 20);
}