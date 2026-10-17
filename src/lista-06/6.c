/* Q6: potenciacao iterativa e recursiva, sem math.h.
   Entrada: base real e expoente natural. Saida: resultados.
   stdio.h fornece printf() e scanf(). */
#include <stdio.h>

double leiaReal(void) { double x; printf("Base: "); scanf("%lf", &x); return x; }
int leiaExpoente(void) { int e; do { printf("Expoente natural: "); scanf("%d", &e); } while (e < 0); return e; }
double potenciaIterativa(double base, int expoente) {
    double resultado = 1; int i; for (i = 0; i < expoente; i++) resultado *= base; return resultado;
}
double potenciaRecursiva(double base, int expoente) {
    if (expoente == 0) return 1;
    return base * potenciaRecursiva(base, expoente - 1);
}
void escrevaResultados(double i, double r) { printf("Iterativa: %.2f\nRecursiva: %.2f\n", i, r); }
int main(void) {
    double base = leiaReal(); int expoente = leiaExpoente();
    escrevaResultados(potenciaIterativa(base, expoente), potenciaRecursiva(base, expoente));
    return 0;
}
