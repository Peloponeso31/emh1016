/*
* Escribir un programa que determine si un numero es
* positivo, negativo o cero.
*/

#include <stdio.h>

int main()
{
    int numero = 80;

    if (numero == 0) printf("El numero es cero.");
    if (numero > 0)  printf("El numero %d es positivo.", numero);
    if (numero < 0)  printf("El numero %d es negativo.", numero);
    
    return 0;
}