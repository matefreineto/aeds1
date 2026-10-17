/*
QUESTAO 8 - PALINDROMO NUMERICO
Entrada: numero natural.
Processamento: inverter os algarismos e comparar com o numero original.
Saida: informar se o numero e palindromo.
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
    if (numero == invertido) printf("%llu e palindromo.\n", numero);
    else printf("%llu nao e palindromo.\n", numero);
    return 0;
}
