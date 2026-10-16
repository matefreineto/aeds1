/*
 * Arquivo: 12.c
 * Objetivo: Ler o comprimento e a largura de um cômodo e calcular a área em metros quadrados.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Permite capturar as dimensões do cômodo e printar a área total de piso.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float comprimento, largura, area;
    
    printf("Digite o comprimento do comodo (em metros): ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura do comodo (em metros): ");
    scanf("%f", &largura);
    
    // 2. Processamento
    area = comprimento * largura;
    
    // 3. Saída de dados
    printf("Serao necessarios %.2f metros quadrados de piso.\n", area);
    
    return 0;
}