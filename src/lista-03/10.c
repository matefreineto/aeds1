/*
QUESTAO 10 - RETANGULO DE ASTERISCOS
Entrada: base e altura positivas.
Processamento: repetir as linhas pela altura e os asteriscos pela base.
Saida: retangulo de asteriscos.
Biblioteca: stdio.h fornece printf() e scanf() para saida e entrada.
*/
#include <stdio.h>
int main(void) {
    int base, altura, linha, coluna;
    do {
        printf("Digite a base: ");
        scanf("%d", &base);
        printf("Digite a altura: ");
        scanf("%d", &altura);
        if (base <= 0 || altura <= 0) printf("Valores invalidos.\n");
    } while (base <= 0 || altura <= 0);
    for (linha = 1; linha <= altura; linha++) {
        for (coluna = 1; coluna <= base; coluna++) printf("*");
        printf("\n");
    }
    return 0;
}
