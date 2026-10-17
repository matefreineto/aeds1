/*
QUESTAO 2 - NOTAS DA TURMA

Modelo de solucao:
Entrada: notas entre 0 e 100. Uma nota negativa encerra a leitura.
Processamento: contar aprovados e reprovados, somar as notas e guardar
              a maior e a menor nota. Aprovacao: nota maior ou igual a 60.
Saida: media, percentuais de aprovados e reprovados, maior e menor nota.

Biblioteca utilizada:
stdio.h: biblioteca padrao de entrada e saida. Fornece printf(), usada
         para escrever na tela, e scanf(), usada para ler o teclado.
*/
#include <stdio.h>

int main(void) {
    float nota, soma = 0.0f, maior = 0.0f, menor = 0.0f;
    int quantidade = 0, aprovados = 0, reprovados = 0;

    while (1) {
        printf("Digite uma nota de 0 a 100 (negativa para terminar): ");
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        if (nota > 100) {
            printf("Nota invalida. Digite um valor entre 0 e 100.\n");
            continue;
        }

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        quantidade++;

        if (nota >= 60) aprovados++;
        else reprovados++;
    }

    if (quantidade == 0) {
        printf("Nenhuma nota valida foi informada.\n");
    } else {
        printf("\nMedia da turma: %.2f\n", soma / quantidade);
        printf("Percentual de aprovados: %.2f%%\n",
               aprovados * 100.0f / quantidade);
        printf("Percentual de reprovados: %.2f%%\n",
               reprovados * 100.0f / quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
    }

    return 0;
}
