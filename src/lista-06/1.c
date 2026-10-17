/* Q1: escrever 1, 2, 3, 4, 5 nas versoes iterativa e recursiva.
   Entrada: nenhuma. Processamento: percorrer 1 ate 5. Saida: sequencias.
   stdio.h fornece printf(), usada para escrever na tela. */
#include <stdio.h>

void escrevaSequenciaIterativa(void) {
    int i;
    for (i = 1; i <= 5; i++) printf("%d%s", i, i < 5 ? ", " : "\n");
}

void escrevaSequenciaRecursiva(int atual) {
    if (atual > 5) { printf("\n"); return; }
    printf("%d%s", atual, atual < 5 ? ", " : "");
    escrevaSequenciaRecursiva(atual + 1);
}

int main(void) {
    printf("Iterativa: "); escrevaSequenciaIterativa();
    printf("Recursiva: "); escrevaSequenciaRecursiva(1);
    return 0;
}
