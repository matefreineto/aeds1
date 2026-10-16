/*
 * Arquivo: 16.c
 * Objetivo: Calcular o Índice de Massa Corporal (IMC) a partir do peso e da altura.
 *           Fórmula: IMC = peso / (altura * altura)
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Utilizada para ler os dados do usuário e escrever o resultado do IMC no terminal.
 */
#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float peso, altura, imc;
    
    printf("Digite o seu peso (em kg, ex: 70.5): ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);
    
    // Tratamento para evitar divisão por zer
    if (altura <= 0) {
        printf("A altura deve ser maior que zero.\n");
        return 1;
    }
    
    // 2. Processamento
    imc = peso / (altura * altura);
    
    // 3. Saída de dados
    printf("O seu Indice de Massa Corporal (IMC) e: %.2f\n", imc);
    
    return 0;
}