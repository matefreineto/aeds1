/*
 * Arquivo: 6.c
 * Objetivo: Calcular e escrever o peso ideal de uma mulher.
 *           Fórmula: (62.1 * altura) - 44.7
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Utilizada para gerenciar a entrada da altura e exibição do resultado na tela.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float altura, pesoIdeal;
    
    printf("Digite a altura da mulher (em metros, ex: 1.65): ");
    scanf("%f", &altura);
    
    // 2. Processamento
    pesoIdeal = (62.1 * altura) - 44.7;
    
    // 3. Saída de dados
    printf("O peso ideal para a altura de %.2fm e: %.2f kg\n", altura, pesoIdeal);
    
    return 0;
}