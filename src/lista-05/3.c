/*
QUESTAO 3 - PERIMETRO DE UM QUADRADO
Entrada: medida positiva do lado.
Processamento: multiplicar o lado por quatro.
Saida: perimetro do quadrado.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

float leiaLadoPositivo(void) {
    float lado;
    do {
        printf("Digite a medida positiva do lado: ");
        scanf("%f", &lado);
        if (lado <= 0) printf("Medida invalida.\n");
    } while (lado <= 0);
    return lado;
}

float calculePerimetroQuadrado(float lado) {
    return 4.0f * lado;
}

void escrevaPerimetro(float lado, float perimetro) {
    printf("Quadrado de lado %.2f: perimetro = %.2f\n", lado, perimetro);
}

int main(void) {
    float lado = leiaLadoPositivo();
    float perimetro = calculePerimetroQuadrado(lado);
    escrevaPerimetro(lado, perimetro);
    return 0;
}
