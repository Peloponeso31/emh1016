#include <stdio.h>

// 0 es falso
// 1 es verdadero
int es_palindromo(int arreglo[], int longitud)
{
    int resultado = 1;
    for (int i = 0; i < longitud; i++)
    {
        resultado = arreglo[i] == arreglo[longitud - i];
        if (!resultado) break;
    }

    return resultado;
}

int main()
{
    //               0  1  2  3  4
    int arreglo[] = {1, 2, 3, 4, 5};
    
    //                    0  1  2  3  4  5
    int otro_arreglo[] = {1, 2, 3, 3, 2, 1};

    if (es_palindromo(otro_arreglo, 5))
    {
        printf("El arreglo es palindromo.");
    }
    else
    {
        printf("El arreglo no es palindromo.");
    }

    return 0;
}