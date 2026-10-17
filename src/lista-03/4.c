/*
QUESTAO 4 - NUMERO PERFEITO
Entrada: numero natural.
Processamento: somar os divisores positivos menores que o numero.
Saida: informar se o numero e perfeito.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int numero, divisor, soma = 0;
    do {
        printf("Digite um numero natural: ");
        scanf("%d", &numero);
        if (numero < 0) printf("Valor invalido.\n");
    } while (numero < 0);
    for (divisor = 1; divisor <= numero / 2; divisor++) {
        if (numero % divisor == 0) soma += divisor;
    }
    if (numero > 0 && soma == numero) printf("%d e perfeito.\n", numero);
    else printf("%d nao e perfeito.\n", numero);
    return 0;
}
