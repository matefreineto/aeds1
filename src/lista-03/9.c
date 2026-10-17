/*
QUESTAO 9 - QUADRADO DE ASTERISCOS
Entrada: inteiro positivo N.
Processamento: usar duas repeticoes, uma para linhas e outra para colunas.
Saida: quadrado N por N de asteriscos.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int n, linha, coluna;
    do {
        printf("Digite o tamanho do quadrado: ");
        scanf("%d", &n);
        if (n <= 0) printf("Valor invalido.\n");
    } while (n <= 0);
    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= n; coluna++) printf("*");
        printf("\n");
    }
    return 0;
}
