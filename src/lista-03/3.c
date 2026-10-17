/*
QUESTAO 3 - NUMERO PRIMO
Entrada: numero inteiro positivo.
Processamento: procurar divisores de 2 ate a raiz aproximada do numero.
Saida: informar se o numero e primo.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int numero, divisor, primo = 1;
    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);
        if (numero <= 0) printf("Valor invalido.\n");
    } while (numero <= 0);
    if (numero < 2) primo = 0;
    for (divisor = 2; divisor <= numero / divisor && primo; divisor++) {
        if (numero % divisor == 0) primo = 0;
    }
    if (primo) printf("%d e primo.\n", numero);
    else printf("%d nao e primo.\n", numero);
    return 0;
}
