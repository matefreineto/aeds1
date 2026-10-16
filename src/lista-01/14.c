/*
    Programa que exibe o item escolhido do menu
    e seu respectivo preço.

    Biblioteca utilizada:
    stdio.h
    - Permite entrada e saída de dados.
    - printf(): mostra mensagens na tela.
    - scanf(): lê dados digitados pelo usuário.
*/

#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha um item do menu:\n");
    printf("1 - Hamburguer\n");
    printf("2 - Pizza\n");
    printf("3 - Salada\n");
    printf("4 - Refrigerante\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce escolheu Hamburguer. Preco: R$ 19,00.\n");
            break;

        case 2:
            printf("Voce escolheu Pizza. Preco: R$ 40,00.\n");
            break;

        case 3:
            printf("Voce escolheu Salada. Preco: R$ 18,00.\n");
            break;

        case 4:
            printf("Voce escolheu Refrigerante. Preco: R$ 7,00.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}