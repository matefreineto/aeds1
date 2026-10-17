/* Q7: fatorial iterativo e recursivo.
   Entrada: natural de 0 a 20. Processamento: produtos sucessivos.
   Saida: resultados. stdio.h fornece printf() e scanf(). */
#include <stdio.h>

int leiaNaturalAte20(void) { int n; do { printf("N (0 a 20): "); scanf("%d", &n); } while (n < 0 || n > 20); return n; }
unsigned long long fatorialIterativo(int n) {
    unsigned long long f = 1; int i; for (i = 2; i <= n; i++) f *= i; return f;
}
unsigned long long fatorialRecursivo(int n) {
    if (n <= 1) return 1;
    return (unsigned long long)n * fatorialRecursivo(n - 1);
}
void escrevaFatoriais(unsigned long long i, unsigned long long r) {
    printf("Iterativo: %llu\nRecursivo: %llu\n", i, r);
}
int main(void) { int n = leiaNaturalAte20(); escrevaFatoriais(fatorialIterativo(n), fatorialRecursivo(n)); return 0; }
