/*
 * Arquivo: 9.c
 * Objetivo: Ler a nota inteira de um aluno e informar o seu desempenho entre A e E.
 * Critérios:
 * - A: 90 a 100
 * - B: 80 a 89[cite: 2]
 * - C: 70 a 79[cite: 2]
 * - D: 60 a 69[cite: 2]
 * - E: Abaixo de 60[cite: 2]
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. É utilizada para funções como 
 *              scanf (para ler a nota inteira digitada pelo usuário) e printf 
 *              (para exibir o conceito correspondente na tela).
 */

#include <stdio.h>

int main() {
    // 1. Declaração da variável para armazenar a nota inteira
    int nota;

    // 2. Entrada de dados
    printf("Digite a nota do aluno (valor inteiro de 0 a 100): ");
    scanf("%d", &nota);

    // 3. Processamento e 4. Saída de dados utilizando estrutura condicional encadeada
    // Validamos primeiro se a nota está dentro do intervalo aceitável (0 a 100)
    if (nota < 0 || nota > 100) {
        printf("Nota inválida! Por favor, insira um valor entre 0 e 100.\n");
    } 
    else if (nota >= 90) {
        printf("Desempenho: A[cite: 2]\n");
    } 
    else if (nota >= 80) {
        printf("Desempenho: B[cite: 2]\n");
    } 
    else if (nota >= 70) {
        printf("Desempenho: C[cite: 2]\n");
    } 
    else if (nota >= 60) {
        printf("Desempenho: D[cite: 2]\n");
    } 
    else {
        printf("Desempenho: E (Abaixo de 60)[cite: 2]\n");
    }

    return 0;
}