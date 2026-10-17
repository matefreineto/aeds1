/*
QUESTAO 8 - NUMERO PERFEITO
Entrada: numero natural.
Processamento: somar divisores positivos menores que o numero.
Saida: informar se o numero e perfeito.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

unsigned int leiaNatural(void) {
    unsigned int numero;
    printf("Digite um numero natural: ");
    scanf("%u", &numero);
    return numero;
}

int ehPerfeito(unsigned int numero) {
    unsigned int divisor, soma = 0;
    if (numero == 0) return 0;
    for (divisor = 1; divisor <= numero / 2; divisor++) {
        if (numero % divisor == 0) soma += divisor;
    }
    return soma == numero;
}

void escrevaPerfeicao(unsigned int numero, int perfeito) {
    if (perfeito) printf("%u e perfeito.\n", numero);
    else printf("%u nao e perfeito.\n", numero);
}

int main(void) {
    unsigned int numero = leiaNatural();
    escrevaPerfeicao(numero, ehPerfeito(numero));
    return 0;
}
