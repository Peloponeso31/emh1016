/*
* Realizar un programa que, de entre dos numeros
* Imprima el mayor y lo asigne a la variable entera
* "mayor". Tambien debe de haber otra variable entera
* llamada "menor".
*/

#include <stdio.h>

int main()
{
    int menor = 99;
    int mayor = -4;
    int guardado;

    if (mayor > menor)
    {
        printf("El numero mayor es: %d.", mayor);
    }
    else {
        // Guardar el valor de "mayor".
        int guardado = mayor;

        // Asignar "mayor" a "menor".
        mayor = menor;

        // Asignar el valor guardado a "menor".
        menor = guardado;
        
        // Imprimir el mayor.
        printf("El numero mayor es: %d.", mayor);
    }

    return 0;
}