#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Los tipos de datos:
  // - Numeros enteros.
  // - Numeros con punto decimal.
  // - Texto.

  // Bits y bytes.
  // Un bit es un numero binario. 1 | 0
  // Un byte es un conjunto de 8 bits: 11111111

  // | 2^3 | 2^2 | 2^1 | 2^0 |
  // +-----+-----+-----+-----+
  // | 1   | 1   | 1   | 0   | Este numero es el 14.

  
  //printf("Un entero utiliza %d bytes de memoria.\n",    sizeof(int));
  //printf("Un caracter utiliza %d bytes de memoria.\n",  sizeof(char));
  //printf("Un flotante utiliza %d bytes de memoria.\n",  sizeof(float));
  //printf("Un double utiliza %d bytes de memoria.\n",    sizeof(double));
  //printf("%c mas texto %c%cotro chacho de texto", 111, 10, 13);

  // Un arreglo son celdas de memoria contiguas que guardan cosas.
  int arreglo[4] = {1, 2, 3, 4};
  printf("%d\n", arreglo[2]);

  int * apuntador = malloc(sizeof(int) * 4);
  apuntador[0] = 3;
  apuntador[1] = 2;
  apuntador[2] = 1;
  apuntador[3] = 0;
  
  return 0;
}
