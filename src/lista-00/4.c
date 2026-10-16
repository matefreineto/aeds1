/*
 * Arquivo: 4.c
 * Objetivo: Calcular e escrever a área de um círculo (Área = PI * raio^2).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Essencial para receber o raio digitado pelo usuário e printar o resultado.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float raio, area;
    const float PI = 3.14159; // Definindo a constante PI
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
    // 2. Processamento
    area = PI * (raio * raio);
    
    // 3. Saída de dados
    printf("A area do circulo e: %.2f\n", area);
    
    return 0;
}