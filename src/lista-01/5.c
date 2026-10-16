/*
 * Arquivo: 5.c
 * Objetivo: Ler três lados e verificar se eles atendem aos critérios para formação de um triângulo.
 * Critério de existência: A soma de dois lados deve ser sempre estritamente maior do que o terceiro lado.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. É utilizada para funções como 
 *              printf (para exibir mensagens no ecrã) e scanf (para ler os valores 
 *              introduzidos pelo utilizador).
 */

#include <stdio.h>

int main() {
    // 1. Declaração das variáveis para armazenar os três lados do triângulo
    float lado1, lado2, lado3;

    // 2. Entrada de dados
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);

    // 3. Processamento: Verificação da condição de existência de um triângulo
    // A soma de dois lados quaisquer deve ser sempre maior do que o terceiro lado.
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        // 4. Saída de dados caso formem um triângulo válido
        printf("Os valores informados formam um triangulo valido!\n");
    } else {
        // 4. Saída de dados caso não formem um triângulo
        printf("Os valores informados NAO formam um triangulo.\n");
    }

    return 0;
}