#include <stdio.h>

int main(int argc, char * argv[])
{
    int numero = 67;

    if (numero % 2 == 0) printf("El numero %d es par.", numero);
    else printf("El numero %d es impar.", numero);

    return 0;
}