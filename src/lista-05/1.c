/*
QUESTAO 1 - SOMA DE DOIS REAIS
Entrada: dois numeros reais.
Processamento: somar os dois valores.
Saida: valores lidos e resultado da soma.

Biblioteca utilizada:
stdio.h: fornece printf() para escrever e scanf() para ler dados.
*/
#include <stdio.h>

float leiaReal(void) {
    float valor;
    printf("Digite um numero real: ");
    scanf("%f", &valor);
    return valor;
}

float someDoisReais(float primeiro, float segundo) {
    return primeiro + segundo;
}

void escrevaSoma(float primeiro, float segundo, float soma) {
    printf("%.2f + %.2f = %.2f\n", primeiro, segundo, soma);
}

int main(void) {
    float primeiro = leiaReal();
    float segundo = leiaReal();
    float soma = someDoisReais(primeiro, segundo);
    escrevaSoma(primeiro, segundo, soma);
    return 0;
}
