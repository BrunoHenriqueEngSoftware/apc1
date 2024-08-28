#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (){
  printf("O tipo 'unsigned char' aceita valores entre %i e %i\n.\n", 0, UCHAR_MAX);
  printf("O tipo 'short int' aceita valores entre %i e %i\n.\n", SHRT_MIN, SHRT_MAX);
  printf("O tipo 'unsigned short int' aceita valores entre %i e %i\n.\n", 0, USHRT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E\n.\n", 0, LDBL_MIN, LDBL_MAX);
  





  return 0;
}