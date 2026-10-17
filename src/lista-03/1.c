/*
QUESTAO 1 - POTENCIACAO
Entrada: base real e expoente natural (inteiro maior ou igual a zero).
Processamento: multiplicar a base por ela mesma tantas vezes quanto o expoente.
Saida: resultado da potenciacao.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada de dados.
*/
#include <stdio.h>
int main(void) {
    double base, resultado = 1.0;
    int expoente, i;
    printf("Digite a base: ");
    while (scanf("%lf", &base) != 1) {
        printf("Base invalida. Digite um numero real: ");
        while (getchar() != '\n') { }
    }
    printf("Digite o expoente natural: ");
    while (scanf("%d", &expoente) != 1 || expoente < 0) {
        printf("Expoente invalido. Digite um inteiro maior ou igual a zero: ");
        while (getchar() != '\n') { }
    }
    for (i = 0; i < expoente; i++) resultado *= base;
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
