/*
 * Arquivo: 1.c
 * Objetivo: Identificar se um número inteiro lido é par ou ímpar.[cite: 4]
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de Entrada e Saída (Standard Input/Output).
 *   Utilizada para capturar o número digitado pelo usuário via 'scanf' e 
 *   exibir o resultado no terminal com 'printf'.
 */

#include <stdio.h>

int main() {
    int numero;
    
    // 1. Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // 2. Processamento e Saída de dados usando estrutura condicional
    if (numero % 2 == 0) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }
    
    return 0;
}