/*
QUESTAO 5 - QUANTIDADE DE ALGARISMOS
Entrada: numero natural.
Processamento: dividir o numero por 10 ate ele se tornar zero.
Saida: quantidade de algarismos.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    unsigned long long numero, copia;
    int quantidade = 0;
    printf("Digite um numero natural: ");
    scanf("%llu", &numero);
    copia = numero;
    do {
        quantidade++;
        copia /= 10;
    } while (copia != 0);
    printf("%llu possui %d algarismo(s).\n", numero, quantidade);
    return 0;
}
