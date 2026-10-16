/*
 * Arquivo: 3.c
 * Objetivo: Calcular e escrever o número de dias vividos até o último aniversário 
 *           (ignorando anos bissextos, considerando 365 dias por ano).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Utilizada para ler a idade informada e exibir o total de dias calculados.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    int idade;
    long int diasVividos; // Usado long int para suportar números maiores
    
    printf("Digite a sua idade (anos completos): ");
    scanf("%d", &idade);
    
    // 2. Processamento (multiplicando os anos por 365 dias)
    diasVividos = (long int)idade * 365;
    
    // 3. Saída de dados
    printf("Voce ja viveu aproximadamente %ld dias.\n", diasVividos);
    
    return 0;
}