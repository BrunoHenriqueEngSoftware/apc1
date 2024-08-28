#include <stdio.h>

int main(){
    double duplo = 256.1234567;
    float flutuante = (float) duplo;
    int inteiro = (int) flutuante;
    char caractere = (char) inteiro;
    
       
    printf("caractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    printf("caractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);


  return 0;
}