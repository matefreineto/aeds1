/*
 Questao 7: calculadora com repeticao e opcao para sair.

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    int opcao;
    float primeiro, segundo, resultado;

    do {
        printf("\n0 - Sair do programa\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Obrigado por usar este programa\n");
        } else if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o segundo numero: ");
            scanf("%f", &segundo);

            switch (opcao) {
                case 1:
                    resultado = primeiro + segundo;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = primeiro - segundo;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = primeiro * segundo;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (segundo == 0) {
                        printf("Nao e possivel dividir por zero.\n");
                    } else {
                        resultado = primeiro / segundo;
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
            }
        } else {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
