/*
 Questao 3: escrever os numeros de 10 ate 1.
 Estrutura: for (repeticao com variavel de controle).

 Biblioteca:
 stdio.h: fornece printf(), usada para exibir dados na tela.
*/
#include <stdio.h>

int main(void) {
    int numero;

    for (numero = 10; numero >= 1; numero--) {
        printf("%d\n", numero);
    }

    return 0;
}
