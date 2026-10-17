/*
QUESTAO 10 - PALINDROMO NUMERICO
Entrada: numero natural.
Processamento: inverter o numero e comparar com o original.
Saida: informar se o numero e palindromo.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

unsigned long long leiaNatural(void) {
    unsigned long long numero;
    printf("Digite um numero natural: ");
    scanf("%llu", &numero);
    return numero;
}

unsigned long long invertaNumero(unsigned long long numero) {
    unsigned long long invertido = 0;
    do {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    } while (numero != 0);
    return invertido;
}

int ehPalindromo(unsigned long long numero) {
    return numero == invertaNumero(numero);
}

void escrevaPalindromo(unsigned long long numero, int palindromo) {
    if (palindromo) printf("%llu e palindromo.\n", numero);
    else printf("%llu nao e palindromo.\n", numero);
}

int main(void) {
    unsigned long long numero = leiaNatural();
    escrevaPalindromo(numero, ehPalindromo(numero));
    return 0;
}
