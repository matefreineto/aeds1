/*
QUESTAO 5 - FATORIAL
Entrada: numero natural entre 0 e 20.
Processamento: multiplicar os inteiros de 2 ate o numero.
Saida: fatorial calculado.
O limite 20 evita ultrapassar o tipo unsigned long long.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

int leiaNaturalAte20(void) {
    int numero;
    do {
        printf("Digite um numero natural entre 0 e 20: ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 20) printf("Valor invalido.\n");
    } while (numero < 0 || numero > 20);
    return numero;
}

unsigned long long calculeFatorial(int numero) {
    unsigned long long fatorial = 1;
    int contador;
    for (contador = 2; contador <= numero; contador++) fatorial *= contador;
    return fatorial;
}

void escrevaFatorial(int numero, unsigned long long fatorial) {
    printf("%d! = %llu\n", numero, fatorial);
}

int main(void) {
    int numero = leiaNaturalAte20();
    unsigned long long fatorial = calculeFatorial(numero);
    escrevaFatorial(numero, fatorial);
    return 0;
}
