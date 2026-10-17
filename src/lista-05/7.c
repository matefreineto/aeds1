/*
QUESTAO 7 - NUMERO PRIMO
Entrada: numero natural.
Processamento: procurar divisor entre 2 e numero/divisor.
Saida: informar se o numero e primo.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

unsigned int leiaNatural(void) {
    unsigned int numero;
    printf("Digite um numero natural: ");
    scanf("%u", &numero);
    return numero;
}

int ehPrimo(unsigned int numero) {
    unsigned int divisor;
    if (numero < 2) return 0;
    for (divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) return 0;
    }
    return 1;
}

void escrevaPrimalidade(unsigned int numero, int primo) {
    if (primo) printf("%u e primo.\n", numero);
    else printf("%u nao e primo.\n", numero);
}

int main(void) {
    unsigned int numero = leiaNatural();
    escrevaPrimalidade(numero, ehPrimo(numero));
    return 0;
}
