/*
QUESTAO 9 - INVERTER UM NUMERO NATURAL
Entrada: numero natural.
Processamento: retirar os algarismos da direita e montar outro numero.
Saida: numero invertido.
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

void escrevaNumeroInvertido(unsigned long long original,
                            unsigned long long invertido) {
    printf("%llu invertido = %llu\n", original, invertido);
}

int main(void) {
    unsigned long long numero = leiaNatural();
    unsigned long long invertido = invertaNumero(numero);
    escrevaNumeroInvertido(numero, invertido);
    return 0;
}
