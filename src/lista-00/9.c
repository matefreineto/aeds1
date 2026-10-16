/*
 * Arquivo: 9.c
 * Objetivo: Calcular e escrever o perímetro de um triângulo (soma dos três lados).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Permite ler os três lados informados pelo usuário e imprimir a soma.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float lado1, lado2, lado3, perimetro;
    
    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    
    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%f", &lado2);
    
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%f", &lado3);
    
    // 2. Processamento
    perimetro = lado1 + lado2 + lado3;
    
    // 3. Saída de dados
    printf("O perimetro do triangulo e: %.2f\n", perimetro);
    
    return 0;
}