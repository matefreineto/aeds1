/*
QUESTAO 7 - SEQUENCIA DE FIBONACCI
Entrada: quantidade positiva N de termos.
Processamento: cada novo termo e a soma dos dois termos anteriores.
Saida: os N primeiros termos da sequencia.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long atual = 0, proximo = 1, novo;
    do {
        printf("Digite a quantidade de termos: ");
        scanf("%d", &n);
        if (n <= 0) printf("Valor invalido.\n");
    } while (n <= 0);
    for (i = 1; i <= n; i++) {
        printf("%llu", atual);
        if (i < n) printf(", ");
        novo = atual + proximo;
        atual = proximo;
        proximo = novo;
    }
    printf("\n");
    return 0;
}
