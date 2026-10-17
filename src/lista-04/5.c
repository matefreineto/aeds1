/*
QUESTAO 5 - MAIOR E SEGUNDO MAIOR

Modelo de solucao:
Entrada: numeros inteiros positivos. O valor 0 encerra a leitura.
         Valores negativos sao rejeitados.
Processamento: manter os dois maiores valores distintos informados.
Saida: maior e segundo maior numero.

Biblioteca utilizada:
stdio.h: fornece printf() para escrever na tela e scanf() para ler dados.
*/
#include <stdio.h>

int main(void) {
    int numero, maior = 0, segundoMaior = 0;

    while (1) {
        printf("Digite um inteiro positivo (0 para terminar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < 0) {
            printf("Valor invalido. Digite somente numeros positivos.\n");
            continue;
        }

        if (numero > maior) {
            segundoMaior = maior;
            maior = numero;
        } else if (numero < maior && numero > segundoMaior) {
            segundoMaior = numero;
        }
    }

    if (maior == 0) {
        printf("Nenhum numero positivo foi informado.\n");
    } else if (segundoMaior == 0) {
        printf("Nao foram informados dois valores positivos distintos.\n");
        printf("Maior numero: %d\n", maior);
    } else {
        printf("Maior numero: %d\n", maior);
        printf("Segundo maior numero: %d\n", segundoMaior);
    }

    return 0;
}
