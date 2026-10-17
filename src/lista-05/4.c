/*
QUESTAO 4 - PAR OU IMPAR
Entrada: um numero inteiro.
Processamento: verificar o resto da divisao por dois.
Saida: classificacao par ou impar.
Biblioteca: stdio.h fornece printf() e scanf().
*/
#include <stdio.h>

int leiaInteiro(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    return numero;
}

int ehPar(int numero) {
    return numero % 2 == 0;
}

void escrevaParidade(int numero, int par) {
    if (par) printf("%d e par.\n", numero);
    else printf("%d e impar.\n", numero);
}

int main(void) {
    int numero = leiaInteiro();
    escrevaParidade(numero, ehPar(numero));
    return 0;
}
