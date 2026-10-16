/*
 Questao 6: calcular o percentual de cruzeirenses e atleticanos.
 Codigos usados: C para Cruzeiro e A para Atletico.

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    int quantidade, indice;
    int cruzeirenses = 0, atleticanos = 0;
    char time;
    float percentualCruzeiro, percentualAtletico;

    do {
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &quantidade);
        if (quantidade <= 0) {
            printf("A quantidade deve ser maior que zero.\n");
        }
    } while (quantidade <= 0);

    for (indice = 1; indice <= quantidade; indice++) {
        do {
            printf("Time do aluno %d (C-Cruzeiro/A-Atletico): ", indice);
            scanf(" %c", &time);
            if (time != 'C' && time != 'c' && time != 'A' && time != 'a') {
                printf("Opcao invalida.\n");
            }
        } while (time != 'C' && time != 'c' && time != 'A' && time != 'a');

        if (time == 'C' || time == 'c') {
            cruzeirenses++;
        } else {
            atleticanos++;
        }
    }

    percentualCruzeiro = cruzeirenses * 100.0f / quantidade;
    percentualAtletico = atleticanos * 100.0f / quantidade;

    printf("Percentual de cruzeirenses: %.2f%%\n", percentualCruzeiro);
    printf("Percentual de atleticanos: %.2f%%\n", percentualAtletico);
    return 0;
}
