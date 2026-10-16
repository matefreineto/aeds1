/*
 Questao 9: calcular uma potencia de forma iterativa, sem math.h.
 A base e real e o expoente e natural (inteiro maior ou igual a zero).

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    double base, resultado = 1.0;
    int expoente, contador;

    printf("Digite a base real: ");
    scanf("%lf", &base);

    do {
        printf("Digite o expoente natural: ");
        scanf("%d", &expoente);
        if (expoente < 0) {
            printf("Expoente invalido. Digite zero ou um inteiro positivo.\n");
        }
    } while (expoente < 0);

    for (contador = 1; contador <= expoente; contador++) {
        resultado = resultado * base;
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
