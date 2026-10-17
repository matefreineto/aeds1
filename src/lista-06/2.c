/* Q2: escrever 1..5 e 5..1 nas versoes iterativa e recursiva.
   Entrada: nenhuma. Processamento: percurso crescente e decrescente.
   Saida: sequencias. stdio.h fornece printf(). */
#include <stdio.h>

void escrevaIdaVoltaIterativa(void) {
    int i;
    for (i = 1; i <= 5; i++) printf("%d, ", i);
    for (i = 5; i >= 1; i--) printf("%d%s", i, i > 1 ? ", " : "\n");
}

void escrevaIdaVoltaRecursiva(int atual) {
    if (atual > 5) return;
    printf("%d, ", atual);
    escrevaIdaVoltaRecursiva(atual + 1);
    printf("%d%s", atual, atual > 1 ? ", " : "\n");
}

int main(void) {
    printf("Iterativa: "); escrevaIdaVoltaIterativa();
    printf("Recursiva: "); escrevaIdaVoltaRecursiva(1);
    return 0;
}
