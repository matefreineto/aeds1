/*
 * Arquivo: 8.c
 * Objetivo: Permitir que o usuário digite uma senha e informar se está correta ou não.
 *           A senha correta é definida como o ano de nascimento/lançamento (2023).
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para ler o valor 
 *              digitado pelo usuário (scanf) e exibir as mensagens de resultado na tela (printf).
 */

#include <stdio.h>

int main() {
    // 1. Declaração de variáveis
    int senhaDigitada;
    const int SENHA_CORRETA = 2023; // Senha fixa baseada no ano de criação

    // 2. Entrada de dados
    printf("Digite a senha (ano): ");
    scanf("%d", &senhaDigitada);

    // 3. Processamento e 4. Saída de dados utilizando estrutura condicional (if-else)
    if (senhaDigitada == SENHA_CORRETA) {
        printf("Senha CORRETA! Acesso autorizado.\n");
    } else {
        printf("Senha INCORRETA! Acesso negado.\n");
    }

    return 0;
}