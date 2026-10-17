/* Q3: sequencia de ida e volta com limites parametrizados.
   Entrada: limites inferior e superior. Processamento: percorrer os limites.
   Saida: versoes iterativa e recursiva. stdio.h fornece printf() e scanf(). */
#include <stdio.h>

int leiaInteiro(const char mensagem[]) {
    int valor;
    printf("%s", mensagem); scanf("%d", &valor);
    return valor;
}

void escrevaIdaVoltaIterativa(int inferior, int superior) {
    int i;
    for (i = inferior; i <= superior; i++) printf("%d, ", i);
    for (i = superior; i >= inferior; i--) printf("%d%s", i, i > inferior ? ", " : "\n");
}

void escrevaIdaVoltaRecursiva(int atual, int superior, int inferior) {
    if (atual > superior) return;
    printf("%d, ", atual);
    escrevaIdaVoltaRecursiva(atual + 1, superior, inferior);
    printf("%d%s", atual, atual > inferior ? ", " : "\n");
}

int main(void) {
    int inferior = leiaInteiro("Limite inferior: ");
    int superior = leiaInteiro("Limite superior: ");
    if (inferior > superior) { int aux = inferior; inferior = superior; superior = aux; }
    printf("Iterativa: "); escrevaIdaVoltaIterativa(inferior, superior);
    printf("Recursiva: "); escrevaIdaVoltaRecursiva(inferior, superior, inferior);
    return 0;
}
