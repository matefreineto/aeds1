/* Q11: identificar numero primo iterativa e recursivamente.
   Entrada: natural. Processamento: procurar divisor a partir de 2.
   Saida: resultados. stdio.h fornece printf() e scanf(). */
#include <stdio.h>

unsigned int leiaNatural(void) { unsigned int n; printf("Numero natural: "); scanf("%u", &n); return n; }
int ehPrimoIterativo(unsigned int n) {
    unsigned int d; if (n < 2) return 0;
    for (d = 2; d <= n / d; d++) if (n % d == 0) return 0;
    return 1;
}
int verifiqueDivisorRecursivo(unsigned int n, unsigned int d) {
    if (d > n / d) return 1;
    if (n % d == 0) return 0;
    return verifiqueDivisorRecursivo(n, d + 1);
}
int ehPrimoRecursivo(unsigned int n) { return n >= 2 && verifiqueDivisorRecursivo(n, 2); }
void escrevaResultado(const char nome[], int primo) { printf("%s: %s\n", nome, primo ? "primo" : "nao primo"); }
int main(void) {
    unsigned int n = leiaNatural();
    escrevaResultado("Iterativo", ehPrimoIterativo(n));
    escrevaResultado("Recursivo", ehPrimoRecursivo(n));
    return 0;
}
