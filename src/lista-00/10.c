/*
 * Arquivo: 10.c
 * Objetivo: Calcular e escrever a média aritmética de três números reais.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Necessária para entrada dos três números e exibição do resultado da média.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float n1, n2, n3, media;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    
    // 2. Processamento
    media = (n1 + n2 + n3) / 3.0;
    
    // 3. Saída de dados
    printf("A media aritmetica e: %.2f\n", media);
    
    return 0;
}