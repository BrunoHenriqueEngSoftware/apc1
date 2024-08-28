#include <stdio.h>

int main() {
    // Declaração das variáveis
    char isbn[14] = "0000000000000"; // 13 dígitos + 1 para o caractere nulo
    int numero_paginas = 0;
    double preco_livro = 0.00;
    int ano_publicacao = 0;

    // Impressão dos valores das variáveis
    printf("ISBN: %s\n", isbn);
    printf("Num. Paginas: %03d\n", numero_paginas);
    printf("Preco: R$ %07.2f\n", preco_livro);
    printf("Publicado em %04d\n", ano_publicacao);

      // Declaração das variáveis
      char matricula[9] = "00000000"; // 8 dígitos + 1 para o caractere nulo
      int idade = 99;
      float altura = 9.90;
      float peso = 999.0;
      char sexo = 'M';

      // Impressão dos valores das variáveis
      printf("Matricula: %s\n", matricula);
      printf("Idade: %d anos\n", idade);
      printf("Altura: %.2f m\n", altura);
      printf("Peso: %.1f kg\n", peso);
      printf("Sexo: %c\n", sexo);

 

  
    return 0;
}
