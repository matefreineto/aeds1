/*
 Questao 8: verificar varios anos bissextos.
 Um ano e bissexto quando e divisivel por 400 ou quando e divisivel
 por 4 e nao e divisivel por 100.

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    int ano;
    char resposta;

    do {
        do {
            printf("Digite um ano positivo: ");
            scanf("%d", &ano);
            if (ano <= 0) {
                printf("Ano invalido.\n");
            }
        } while (ano <= 0);

        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
            printf("%d e um ano bissexto.\n", ano);
        } else {
            printf("%d nao e um ano bissexto.\n", ano);
        }

        do {
            printf("Deseja verificar um novo ano? (S/N): ");
            scanf(" %c", &resposta);
            if (resposta != 'S' && resposta != 's' &&
                resposta != 'N' && resposta != 'n') {
                printf("Resposta invalida. Digite S ou N.\n");
            }
        } while (resposta != 'S' && resposta != 's' &&
                 resposta != 'N' && resposta != 'n');

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
