#include <stdio.h>

int main()
{
    int opcion;
    int a;
    int b;
    
    printf("Menu:\n");
    printf("1.- Suma.\n");
    printf("2.- Resta.\n");
    printf("0.- Salir.\n");
    printf("Escriba la operacion que quiera realizar: ");

    scanf("%d", &opcion);

    printf("Escriba un numero: ");
    scanf("%d", &a);
    printf("Escriba un numero: ");
    scanf("%d", &b);

    if (opcion == 1)
    {
        printf("El resultado de %d + %d es: %d", a, b, a+b);
    }
    if (opcion == 2)
    {
        printf("El resultado de %d - %d es: %d", a, b, a-b);
    }

    
    return 0;
}