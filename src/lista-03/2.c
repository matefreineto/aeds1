/*
QUESTAO 2 - FATORIAL
Entrada: numero inteiro N nao negativo.
Processamento: multiplicar os inteiros de 1 ate N.
Saida: N fatorial.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long fatorial = 1;
    do {
        printf("Digite um inteiro entre 0 e 20: ");
        scanf("%d", &n);
        if (n < 0 || n > 20) printf("Valor invalido.\n");
    } while (n < 0 || n > 20);
    for (i = 2; i <= n; i++) fatorial *= i;
    printf("%d! = %llu\n", n, fatorial);
    return 0;
}
