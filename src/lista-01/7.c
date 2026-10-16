/*
 * Arquivo: 7.c
 * Objetivo: Verificar se uma pessoa é maior de idade com base na idade informada (>= 18 anos).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para funções como 
 *              printf (para exibir mensagens na tela) e scanf (para ler o valor 
 *              inteiro digitado pelo usuário).
 */

#include <stdio.h>

int main() {
    // 1. Declaração da variável para armazenar a idade
    int idade;

    // 2. Entrada de dados
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // 3. Processamento e 4. Saída de dados utilizando estrutura condicional (if-else)
    if (idade >= 18) {
        printf("A pessoa é maior de idade (possui %d anos).\n", idade);
    } else {
        printf("A pessoa é menor de idade (possui %d anos).\n", idade);
    }

    return 0;
}