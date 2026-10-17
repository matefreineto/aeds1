/*
QUESTAO 11 - TRIANGULO DE ASTERISCOS
Entrada: inteiro positivo N.
Processamento: em cada linha, escrever uma quantidade crescente de asteriscos.
Saida: triangulo com N linhas.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int n, linha, coluna;
    do {
        printf("Digite o numero de linhas: ");
        scanf("%d", &n);
        if (n <= 0) printf("Valor invalido.\n");
    } while (n <= 0);
    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) printf("*");
        printf("\n");
    }
    return 0;
}
