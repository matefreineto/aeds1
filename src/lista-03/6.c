/*
QUESTAO 6 - INVERTER UM NUMERO
Entrada: numero natural.
Processamento: retirar cada ultimo algarismo e formar o numero invertido.
Saida: numero com os algarismos invertidos.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    unsigned long long numero, copia, invertido = 0;
    printf("Digite um numero natural: ");
    scanf("%llu", &numero);
    copia = numero;
    do {
        invertido = invertido * 10 + copia % 10;
        copia /= 10;
    } while (copia != 0);
    printf("Numero invertido: %llu\n", invertido);
    return 0;
}
