/*
 Questao 5: ler N numeros e contar pares e impares.

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    int n, numero, indice;
    int pares = 0, impares = 0;

    do {
        printf("Quantos numeros serao lidos? ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("N deve ser maior que zero.\n");
        }
    } while (n <= 0);

    for (indice = 1; indice <= n; indice++) {
        printf("Digite o %do numero: ", indice);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}
