/*
QUESTAO 4 - MAIOR DIFERENCA ABSOLUTA

Modelo de solucao:
Entrada: numeros inteiros. O valor 0 encerra a leitura e nao e processado.
Processamento: calcular a diferenca absoluta entre cada numero e o anterior,
              guardando a maior diferenca encontrada.
Saida: maior diferenca absoluta entre dois numeros consecutivos.

Biblioteca utilizada:
stdio.h: fornece printf() para escrever na tela e scanf() para ler dados.
Nao foi usada math.h: o valor absoluto e calculado com uma decisao simples.
*/
#include <stdio.h>

int main(void) {
    int numero, anterior = 0, diferenca, maiorDiferenca = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite um numero inteiro (0 para terminar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (quantidade > 0) {
            diferenca = numero - anterior;
            if (diferenca < 0) diferenca = -diferenca;
            if (diferenca > maiorDiferenca) maiorDiferenca = diferenca;
        }

        anterior = numero;
        quantidade++;
    }

    if (quantidade < 2) {
        printf("Sao necessarios pelo menos dois numeros para calcular a diferenca.\n");
    } else {
        printf("Maior diferenca absoluta: %d\n", maiorDiferenca);
    }

    return 0;
}
