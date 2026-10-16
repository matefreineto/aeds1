/*
 Questao 1: escrever os numeros de 10 ate 1.
 Estrutura: do...while (teste no final).

 Biblioteca:
 stdio.h: fornece printf(), usada para exibir dados na tela.
*/
#include <stdio.h>

int main(void) {
    int numero = 10;

    do {
        printf("%d\n", numero);
        numero--;
    } while (numero >= 1);

    return 0;
}
