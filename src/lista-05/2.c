/*
QUESTAO 2 - MAIOR ENTRE DOIS REAIS
Entrada: dois numeros reais.
Processamento: comparar os valores e selecionar o maior.
Saida: maior valor ou informacao de igualdade.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

float leiaReal(void) {
    float valor;
    printf("Digite um numero real: ");
    scanf("%f", &valor);
    return valor;
}

float obtenhaMaior(float primeiro, float segundo) {
    if (primeiro > segundo) return primeiro;
    return segundo;
}

void escrevaMaior(float primeiro, float segundo, float maior) {
    if (primeiro == segundo)
        printf("Os dois valores sao iguais: %.2f\n", primeiro);
    else
        printf("O maior valor e %.2f\n", maior);
}

int main(void) {
    float primeiro = leiaReal();
    float segundo = leiaReal();
    float maior = obtenhaMaior(primeiro, segundo);
    escrevaMaior(primeiro, segundo, maior);
    return 0;
}
