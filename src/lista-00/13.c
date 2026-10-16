/*
 * Arquivo: 13.c
 * Objetivo: Ler o preço original de um produto e calcular o preço promocional (15% de desconto).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Essencial para capturar o preço original e exibir o valor com desconto.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float precoOriginal, valorDesconto, precoPromocional;
    
    printf("Digite o preco original do produto (R$): ");
    scanf("%f", &precoOriginal);
    
    // 2. Processamento
    valorDesconto = precoOriginal * 0.15;
    precoPromocional = precoOriginal - valorDesconto;
    
    // 3. Saída de dados
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Preco promocional com 15%% de desconto: R$ %.2f\n", precoPromocional);
    
    return 0;
}