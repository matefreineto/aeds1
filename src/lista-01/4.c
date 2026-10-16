/*
 * Arquivo: 4.c
 * Objetivo: Identificar se um ano lido é bissexto ou não.
 * Regra para o ano bissexto: 
 * - O ano deve ser divisível por 4 E não pode ser divisível por 100, 
 *   OU deve ser divisível por 400.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para ler o valor 
 *              digitado pelo usuário (scanf) e exibir as mensagens na tela (printf).
 */

#include <stdio.h>

int main() {
    // 1. Declaração da variável para armazenar o ano
    int ano;

    // 2. Entrada de dados
    printf("Digite um ano para verificar (ex: 2024): ");
    scanf("%d", &ano);

    // 3. Processamento com Estrutura Condicional e operadores lógicos (&& e ||)
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        // 4. Saída de dados se a condição for verdadeira
        printf("O ano %d e bissexto.\n", ano);
    } else {
        // 4. Saída de dados se a condição for falsa
        printf("O ano %d NAO e bissexto.\n", ano);
    }

    return 0;
}