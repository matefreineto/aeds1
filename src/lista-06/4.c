/* Q4: escrever N ate 0 iterativa e recursivamente.
   Entrada: N natural. Processamento: decrementar ate zero. Saida: sequencias.
   stdio.h fornece printf() e scanf(). */
#include <stdio.h>

int leiaNatural(void) {
    int n;
    do { printf("Digite N (natural): "); scanf("%d", &n); } while (n < 0);
    return n;
}
void escrevaDecrescenteIterativa(int n) {
    int i; for (i = n; i >= 0; i--) printf("%d%s", i, i ? ", " : "\n");
}
void escrevaDecrescenteRecursiva(int n) {
    if (n < 0) { printf("\n"); return; }
    printf("%d%s", n, n ? ", " : "");
    escrevaDecrescenteRecursiva(n - 1);
}
int main(void) {
    int n = leiaNatural();
    printf("Iterativa: "); escrevaDecrescenteIterativa(n);
    printf("Recursiva: "); escrevaDecrescenteRecursiva(n);
    return 0;
}
