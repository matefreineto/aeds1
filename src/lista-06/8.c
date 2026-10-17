/* Q8: verificar palindromo numérico iterativa e recursivamente.
   Entrada: natural. Processamento: inverter e comparar. Saida: resultados.
   stdio.h fornece printf() e scanf(). */
#include <stdio.h>

unsigned long long leiaNatural(void) { unsigned long long n; printf("Numero natural: "); scanf("%llu", &n); return n; }
unsigned long long invertaIterativo(unsigned long long n) {
    unsigned long long r = 0; do { r = r * 10 + n % 10; n /= 10; } while (n); return r;
}
unsigned long long invertaRecursivoAux(unsigned long long n, unsigned long long r) {
    if (n == 0) return r;
    return invertaRecursivoAux(n / 10, r * 10 + n % 10);
}
int ehPalindromoIterativo(unsigned long long n) { return n == invertaIterativo(n); }
int ehPalindromoRecursivo(unsigned long long n) { return n == invertaRecursivoAux(n, 0); }
void escrevaResultado(const char nome[], int resultado) { printf("%s: %s\n", nome, resultado ? "palindromo" : "nao palindromo"); }
int main(void) {
    unsigned long long n = leiaNatural();
    escrevaResultado("Iterativo", ehPalindromoIterativo(n));
    escrevaResultado("Recursivo", ehPalindromoRecursivo(n));
    return 0;
}
