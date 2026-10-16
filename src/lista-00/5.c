/*
 * Arquivo: 5.c
 * Objetivo: Calcular e escrever o peso ideal de um homem.
 *           Fórmula: (72.7 * altura) - 58
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Permite a interação via console (entrada de altura e saída do peso ideal).
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float altura, pesoIdeal;
    
    printf("Digite a altura do homem (em metros, ex: 1.75): ");
    scanf("%f", &altura);
    
    // 2. Processamento
    pesoIdeal = (72.7 * altura) - 58;
    
    // 3. Saída de dados
    printf("O peso ideal para a altura de %.2fm e: %.2f kg\n", altura, pesoIdeal);
    
    return 0;
}