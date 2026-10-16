/*
 * Arquivo: 7.c
 * Objetivo: Converter uma temperatura em graus Celsius para Fahrenheit.
 *           Fórmula: Fahrenheit = celsius * 1.8 + 32
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Necessária para coletar o valor em Celsius e imprimir o valor convertido.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    // 2. Processamento
    fahrenheit = (celsius * 1.8) + 32;
    
    // 3. Saída de dados
    printf("%.2f C equivalem a %.2f F\n", celsius, fahrenheit);
    
    return 0;
}