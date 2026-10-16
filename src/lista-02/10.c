/*
 Questao 10: ler notas, informar a situacao dos alunos e calcular
 media e percentuais de aprovacao e reprovacao.

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    int quantidade, indice;
    int aprovados = 0, reprovados = 0;
    float nota, soma = 0.0f;
    float media, percentualAprovados, percentualReprovados;

    do {
        printf("Informe a quantidade de alunos: ");
        scanf("%d", &quantidade);
        if (quantidade <= 0) {
            printf("A quantidade deve ser maior que zero.\n");
        }
    } while (quantidade <= 0);

    for (indice = 1; indice <= quantidade; indice++) {
        do {
            printf("Nota do aluno %d (0 a 100): ", indice);
            scanf("%f", &nota);
            if (nota < 0 || nota > 100) {
                printf("Nota invalida.\n");
            }
        } while (nota < 0 || nota > 100);

        soma = soma + nota;

        if (nota >= 60) {
            printf("Aluno aprovado.\n");
            aprovados++;
        } else {
            printf("Aluno reprovado.\n");
            reprovados++;
        }
    }

    media = soma / quantidade;
    percentualAprovados = aprovados * 100.0f / quantidade;
    percentualReprovados = reprovados * 100.0f / quantidade;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Percentual de aprovados: %.2f%%\n", percentualAprovados);
    printf("Percentual de reprovados: %.2f%%\n", percentualReprovados);
    return 0;
}
