#include <stdio.h>

int main() {
    int numero;

    printf("Entre com o numero: ");
    int deu_certo = scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;

    if(eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }

    int idade = 0;
        printf("Entre com a sua idade: ");
        deu_certo = scanf("%i", &idade);

    //if aninhado

    if (idade < 16) {
        printf("Voce nao pode votar!\n");
    } else {
        if (idade >= 18 && idade <= 70) {
            printf("Voce eh obrigado a votar!\n");
        } else {
            printf("Voce nao eh obrigado a votar!\n");
        }
    }

    float media = 0.0f;
    printf("Entre com a sua media final: ");
    deu_certo = scanf("%i", &media);

    //if encadeado
    if (media >= 9.0f && media <= 10.0f){
        printf("Sua mencao e SS\n");
    } else if (media >= 7.0f && media <= 8.9f) {
        printf("Sua mencao e MS\n");
    } else if (media >= 5.0f && media <= 6.9f) {
        printf("Sua mencao e MM\n");
    } else if (media >= 3.0f && media <= 4.9f) {
        printf("Sua mencao e MI\n");
    } else if (media >= 1.0f && media <= 2.9f) {
        printf("Sua mencao e II\n");
    } else{
        printf("Sua mencao e SR\n");
    }

    return 0;

}