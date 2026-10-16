/*
 * Arquivo: 15.c
 * Objetivo: Calcular o valor total da conta de energia com base no consumo em kWh e no preço do kWh.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Responsável por receber o consumo e o preço unitário e devolver o valor total calculado.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float consumoKWh, precoKWh, valorTotal;
    
    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumoKWh);
    
    printf("Digite o preco do kWh (R$): ");
    scanf("%f", &precoKWh);
    
    // 2. Processamento
    valorTotal = consumoKWh * precoKWh;
    
    // 3. Saída de dados
    printf("O valor total da conta de energia e: R$ %.2f\n", valorTotal);
    
    return 0;
}