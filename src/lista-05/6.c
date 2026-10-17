/*
QUESTAO 6 - POTENCIACAO ITERATIVA
Entrada: base real e expoente natural.
Processamento: multiplicar a base por ela mesma expoente vezes.
Saida: resultado da potencia. Nao utiliza math.h.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

float leiaBase(void) {
    float base;
    printf("Digite a base real: ");
    scanf("%f", &base);
    return base;
}

int leiaExpoenteNatural(void) {
    int expoente;
    do {
        printf("Digite o expoente natural: ");
        scanf("%d", &expoente);
        if (expoente < 0) printf("Expoente invalido.\n");
    } while (expoente < 0);
    return expoente;
}

float calculePotencia(float base, int expoente) {
    float resultado = 1.0f;
    int contador;
    for (contador = 0; contador < expoente; contador++) resultado *= base;
    return resultado;
}

void escrevaPotencia(float base, int expoente, float resultado) {
    printf("%.2f elevado a %d = %.2f\n", base, expoente, resultado);
}

int main(void) {
    float base = leiaBase();
    int expoente = leiaExpoenteNatural();
    float resultado = calculePotencia(base, expoente);
    escrevaPotencia(base, expoente, resultado);
    return 0;
}
