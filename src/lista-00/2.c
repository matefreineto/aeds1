/*
 * Arquivo: 2.c
 * Objetivo: Calcular e escrever o perímetro e a área de um quadrado.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Necessária para realizar a comunicação com o usuário via 
 *   terminal (leitura do lado e exibição dos resultados).
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float lado, perimetro, area;
    
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    
    // 2. Processamento
    perimetro = 4 * lado;
    area = lado * lado;
    
    // 3. Saída de dados
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    
    return 0;
}