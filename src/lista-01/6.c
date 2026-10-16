/*
 * Arquivo: 6.c
 * Objetivo: Ler três lados de um triângulo, verificar se formam um triângulo válido 
 *           e identificar o seu tipo (equilátero, isósceles ou escaleno).
 * 
 * Regras dos tipos de triângulo:
 * - Equilátero: Todos os três lados são iguais.
 * - Isósceles: Dois lados são iguais.
 * - Escaleno: Todos os três lados são diferentes.
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para ler os valores 
 *              digitados pelo usuário (scanf) e exibir os resultados na tela (printf).
 */

#include <stdio.h>

int main() {
    // 1. Declaração das variáveis para os três lados
    float l1, l2, l3;

    // 2. Entrada de dados
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);

    // 3. Processamento: Verificação de validade e classificação
    // Condição de existência de um triângulo: a soma de dois lados deve ser sempre maior que o terceiro
    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        
        // Se for válido, verifica o tipo do triângulo
        if (l1 == l2 && l2 == l3) {
            // 4. Saída para Triângulo Equilátero
            printf("O triângulo é válido e do tipo: EQUILÁTERO (todos os lados iguais).\n");
            
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            // 4. Saída para Triângulo Isósceles
            printf("O triângulo é válido e do tipo: ISÓSCELES (dois lados iguais).\n");
            
        } else {
            // 4. Saída para Triângulo Escaleno
            printf("O triângulo é válido e do tipo: ESCALENO (todos os lados diferentes).\n");
        }
        
    } else {
        // 4. Saída caso os valores não formem um triângulo
        printf("Os valores informados NÃO formam um triângulo válido.\n");
    }

    return 0;
}