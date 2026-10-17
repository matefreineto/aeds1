/* Q9: calcular o k-esimo termo Fibonacci.
   Convencao: F(0)=0, F(1)=1. Entrada: k entre 0 e 40.
   O limite reduz o alto custo da recursao simples. stdio.h fornece I/O. */
#include <stdio.h>

int leiaK(void) { int k; do { printf("k (0 a 40): "); scanf("%d", &k); } while (k < 0 || k > 40); return k; }
unsigned long long fibonacciIterativo(int k) {
    unsigned long long a = 0, b = 1, proximo; int i;
    if (k == 0) return 0;
    for (i = 1; i < k; i++) { proximo = a + b; a = b; b = proximo; }
    return b;
}
unsigned long long fibonacciRecursivo(int k) {
    if (k <= 1) return (unsigned long long)k;
    return fibonacciRecursivo(k - 1) + fibonacciRecursivo(k - 2);
}
void escrevaFibonacci(int k, unsigned long long i, unsigned long long r) {
    printf("F(%d) iterativo = %llu\nF(%d) recursivo = %llu\n", k, i, k, r);
}
int main(void) { int k = leiaK(); escrevaFibonacci(k, fibonacciIterativo(k), fibonacciRecursivo(k)); return 0; }
