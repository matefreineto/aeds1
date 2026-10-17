/*
QUESTAO 3 - POSITIVOS, NEGATIVOS E ZEROS

Modelo de solucao:
Entrada: numeros inteiros. O valor 999 encerra a leitura e nao e contado.
Processamento: classificar cada numero como positivo, negativo ou zero.
Saida: quantidade de positivos, negativos e zeros.

Biblioteca utilizada:
stdio.h: fornece printf() para escrever na tela e scanf() para ler dados.
*/
#include <stdio.h>

int main(void) {
    int numero;
    int positivos = 0, negativos = 0, zeros = 0;

    while (1) {
        printf("Digite um numero inteiro (999 para terminar): ");
        scanf("%d", &numero);

        if (numero == 999) {
            break;
        }

        if (numero > 0) positivos++;
        else if (numero < 0) negativos++;
        else zeros++;
    }

    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);

    return 0;
}
