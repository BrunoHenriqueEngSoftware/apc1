#include <stdio.h>
#include <stdlib.h> 

int main(){

    int opcao = 0;

    do{

    system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - Consular Saldo\n");
    printf("2 - Recarregar Saldo\n");
    printf("3 - Ver Recados\n");
    printf("0 - Sair\n");
    printf("Entre com a opcao => ");
    scanf("%i", &opcao);
    while (getchar() != '\n'); //limpar buffer
      

    switch(opcao){
        case 1: {
            system("clear");
            printf("CONSULTAR SALDO\n"); 
            printf("Saldo disponicel U$00,50\n"); break;
        } 
        case 2: printf("Digite o valor para recarga\n"); break;
        case 3: printf("Sem recados\n"); break;
        case 0: printf("Ate logo. Volte Sempre\n"); break;
        default: printf("Opcao Invalida. Tente novamente escolhendo uma opcao disponivel\n");

    }

    if(opcao != 0){
        printf("Pressione ENTER para continuar...");
        getchar();
    }
        
    
} while (opcao != 0);





return 0;
}