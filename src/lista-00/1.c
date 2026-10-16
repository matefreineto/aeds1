/*
 * Arquivo: 1.c
 * Objetivo: Calcular e escrever a soma de dois números reais lidos.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de Entrada e Saída (Standard Input/Output).
 *   É utilizada aqui para permitir o uso das funções 'printf' (para exibir 
 *   mensagens na tela) e 'scanf' (para capturar os valores digitados pelo usuário).
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float num1, num2, soma;
    
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);
    
    // 2. Processamento
    soma = num1 + num2;
    
    // 3. Saída de dados
    printf("A soma de %.2f + %.2f = %.2f\n", num1, num2, soma);
    
    return 0;
}