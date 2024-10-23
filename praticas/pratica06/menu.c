#include <stdio.h>

int main(){

    int opcao = 0;

    do{

    printf("MENU PRINCIPAL");
    printf("\n1 - Consular Saldo\n");
    printf("2 - Recarregar Saldo\n");
    printf("3 - Ver Recados\n");
    printf("0 - Sair\n");
    printf("Entre com a opcao => ");
    scanf("%i", &opcao);
    while (getchar() != '\n'); //limpar buffer
      

    switch(opcao){
        case 1: printf("Saldo disponicel U$00,50\n"); break;
        case 2: printf("Digite o valor para recarga\n"); break;
        case 3: printf("Sem recados\n"); break;
        case 0: printf("ate logo. Volte Sempre"); break;
        default: printf("Opcao Invalida. Tente novamente escolhendo uma opcao disponivel\n");

    }
    
} while (opcao != 0);





return 0;
}