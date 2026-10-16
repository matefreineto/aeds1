/*
 Questao 2: escrever os numeros de 10 ate 1.
 Estrutura: while (teste no inicio).

 Biblioteca:
 stdio.h: fornece printf(), usada para exibir dados na tela.
*/
#include <stdio.h>

int main(void) {
    int numero = 10;

    while (numero >= 1) {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}
