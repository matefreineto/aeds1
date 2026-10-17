/* Q10: inversao, soma dos digitos e potencia de 2, nas duas abordagens.
   Entrada: natural. Processamento: funcoes atomicas iterativas/recursivas.
   Saida: resultados. stdio.h fornece printf() e scanf(). */
#include <stdio.h>

unsigned long long leiaNatural(void) { unsigned long long n; printf("Numero natural: "); scanf("%llu", &n); return n; }
unsigned long long invertaIterativo(unsigned long long n) {
    unsigned long long r = 0; do { r = r * 10 + n % 10; n /= 10; } while (n); return r;
}
unsigned long long invertaRecursivoAux(unsigned long long n, unsigned long long r) {
    return n == 0 ? r : invertaRecursivoAux(n / 10, r * 10 + n % 10);
}
unsigned int somaDigitosIterativa(unsigned long long n) {
    unsigned int soma = 0; do { soma += (unsigned int)(n % 10); n /= 10; } while (n); return soma;
}
unsigned int somaDigitosRecursiva(unsigned long long n) {
    return n < 10 ? (unsigned int)n : (unsigned int)(n % 10) + somaDigitosRecursiva(n / 10);
}
int ehPotenciaDoisIterativa(unsigned long long n) {
    if (n == 0) return 0;
    while (n % 2 == 0) n /= 2;
    return n == 1;
}
int ehPotenciaDoisRecursiva(unsigned long long n) {
    if (n == 1) return 1;
    if (n == 0 || n % 2 != 0) return 0;
    return ehPotenciaDoisRecursiva(n / 2);
}
void escrevaResultados(unsigned long long n) {
    printf("Invertido iterativo: %llu\n", invertaIterativo(n));
    printf("Invertido recursivo: %llu\n", invertaRecursivoAux(n, 0));
    printf("Soma dos digitos iterativa: %u\n", somaDigitosIterativa(n));
    printf("Soma dos digitos recursiva: %u\n", somaDigitosRecursiva(n));
    printf("Potencia de 2 iterativa: %s\n", ehPotenciaDoisIterativa(n) ? "sim" : "nao");
    printf("Potencia de 2 recursiva: %s\n", ehPotenciaDoisRecursiva(n) ? "sim" : "nao");
}
int main(void) { unsigned long long n = leiaNatural(); escrevaResultados(n); return 0; }
