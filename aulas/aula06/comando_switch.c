#include <stdio.h>

int main(){

    int nota = 0;
    printf("Entre com a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);

    // if (nota ==1) {
    //     printf("GANHOU  1 ESTRELA!\n");

    // } else if (nota == 2) {
    //     printf("GANHOU  2 ESTRELA!\n");

    // } else if (nota == 3) {
    //     printf("GANHOU  3 ESTRELA!\n");

    // } else if (nota == 4) {
    //     printf("GANHOU  4 ESTRELA!\n");

    // } else if (nota == 5) {
    //     printf("GANHOU  5 ESTRELA!\n");

    // } else {
    //     printf("NOTA INVALIDA!\n");

 
    switch(nota){
        case 1: printf("Ganhou 1 estrela!\n"); break;
        case 2: printf("Ganhou 2 estrela!\n"); break;
        case 3: printf("Ganhou 3 estrela!\n"); break;
        case 4: printf("Ganhou 4 estrela!\n"); break;
        case 5: printf("Ganhou 5 estrela!\n"); break;
        default: printf("Nota Invalida!\n");
    }

        printf("<< MENU PRINCIPAL >>\n");
        printf("--------------------\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Recarregar Saldo\n");
        printf("3 - Ver Recados\n");
        printf("4 - Ultimas Ligacoes\n");
        printf("5 - Sair\n");
        printf("Entre com a opcao =>\n");
        printf("--------------------\n");
        int opcao = 0;
        deu_certo = scanf("%i", &opcao);

    switch (opcao){
        case 1: printf("Saldo de U$10.000,00\n"); break;
        case 2: printf("Escolha um valor\n"); break;
        case 3: printf("Voce tem 4 recados\n"); break;
        case 4: printf("61 8888-8888\n61 7777-7777\n"); break;
        case 5: printf("Ate logo!\n"); break;
        default: printf("Opcao invalida\n");
    }
    
   
    return 0;
}