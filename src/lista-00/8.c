/*
 * Arquivo: 8.c
 * Objetivo: Calcular o salário bruto com base nas horas trabalhadas e valor da hora.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Usada para ler as horas trabalhadas e o valor por hora, bem como 
 *   exibir o valor final do salário bruto.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float horasTrabalhadas, valorHora, salarioBruto;
    
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);
    
    printf("Digite o valor recebido por hora (R$): ");
    scanf("%f", &valorHora);
    
    // 2. Processamento
    salarioBruto = horasTrabalhadas * valorHora;
    
    // 3. Saída de dados
    printf("O salario bruto total e: R$ %.2f\n", salarioBruto);
    
    return 0;
}