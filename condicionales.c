#include <stdio.h>

int main(int argc, char * argv[])
{
    float peso = 92.0;
    float estatura = 1.8;
    float imc = peso / (estatura * estatura);
    printf("El imc es: %f\n", imc);

    // Booleano:
    // 0 Falso
    // 1 Verdadero

    // Operadores booleanos
    // == Es igual a
    // >= Mayor o igual a
    // <= Menor o igual a
    // > Mayor a
    // < Menor a

    // Compuestas:
    // && y | and
    // || o | or


    // And:
    // 1 && 1 es verdadero
    // 1 && 0 es falso

    // Or:
    // 1 || 1 Verdadero
    // 1 || 0 Verdadero
    // 0 || 0 Falso
    if (imc < 18.5) 
    {
        printf("La persona esta por debajo del peso normal\n.");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("La persona tiene un peso normal\n.");
    }
    else if (imc > 25 && imc < 29.9)
    {
        printf("La persona tiene sobrepeso\n.");
    }
    else
    {
        printf("La persona tiene obesidad\n.");
    }

    printf("%i\n", imc < 25);
}