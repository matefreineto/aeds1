/*
 * Arquivo: 3.c
 * Objetivo: Calcular e escrever o peso ideal de uma pessoa, unificando os cálculos 
 *           para os gêneros masculino ('M') e feminino ('F').
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para ler as 
 *              informações digitadas pelo usuário (scanf) e exibir os 
 *              resultados na tela (printf).
 */

#include <stdio.h>

int main() {
    // 1. Declaração de variáveis
    char genero;
    float altura, pesoIdeal;

    // 2. Entrada de dados
    printf("Digite o seu genero (M para Masculino / F para Feminino): ");
    scanf(" %c", &genero); // O espaço antes de %c limpa o buffer de entrada (ignora quebras de linha pendentes)

    printf("Digite a sua altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    // 3. Processamento com Estrutura Condicional
    // Verificamos o gênero informado para aplicar a fórmula correta (aceitando maiúsculas e minúsculas)
    if (genero == 'M' || genero == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        
        // 4. Saída de dados para o gênero masculino
        printf("O peso ideal para a altura de %.2fm (Masculino) e: %.2f kg\n", altura, pesoIdeal);
        
    } else if (genero == 'F' || genero == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        
        // 4. Saída de dados para o gênero feminino
        printf("O peso ideal para a altura de %.2fm (Feminino) e: %.2f kg\n", altura, pesoIdeal);
        
    } else {
        // Tratamento de erro caso o usuário digite um caractere inválido
        printf("Opcao de genero invalida! Utilize 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}