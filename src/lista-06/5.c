/* Q5: somar inteiros entre n e m, inclusive.
   Entrada: dois limites. Processamento: soma iterativa e recursiva.
   Saida: resultados. stdio.h fornece printf() e scanf(). */
#include <stdio.h>

int leiaInteiro(const char mensagem[]) { int x; printf("%s", mensagem); scanf("%d", &x); return x; }
long long someIntervaloIterativo(int n, int m) {
    long long soma = 0; int i; for (i = n; i <= m; i++) soma += i; return soma;
}
long long someIntervaloRecursivo(int n, int m) {
    if (n > m) return 0;
    return n + someIntervaloRecursivo(n + 1, m);
}
void escrevaSomas(long long iterativa, long long recursiva) {
    printf("Soma iterativa: %lld\nSoma recursiva: %lld\n", iterativa, recursiva);
}
int main(void) {
    int n = leiaInteiro("Limite inferior: "), m = leiaInteiro("Limite superior: ");
    if (n > m) { int aux = n; n = m; m = aux; }
    escrevaSomas(someIntervaloIterativo(n, m), someIntervaloRecursivo(n, m));
    return 0;
}
