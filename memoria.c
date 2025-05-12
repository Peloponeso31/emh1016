#include <stdio.h>

int main()
{
  printf("Un entero utiliza %d bytes de memoria.\n", sizeof(int));
  printf("Un caracter utiliza %d bytes de memoria.\n", sizeof(char));
  printf("Un flotante utiliza %d bytes de memoria.\n", sizeof(float));
  printf("Un double utiliza %d bytes de memoria.\n", sizeof(double));
  printf("%c", 111);
  return 0;
}
