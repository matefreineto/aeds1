/*
 * Arquivo: 10.c
 * Objetivo: Resolver uma equação do segundo grau (ax^2 + bx + c = 0), 
 *           analisando todos os cenários possíveis (a = 0, Delta < 0, Delta = 0, Delta > 0).
 * 
 * Bibliotecas utilizadas:
 * - <stdio.h>: Biblioteca padrão de entrada e saída. Utilizada para ler os coeficientes 
 *              digitados pelo usuário (scanf) e exibir os resultados na tela (printf).
 * - <math.h>: Biblioteca matemática. Utilizada para calcular a raiz quadrada (função sqrt) 
 *             necessária para o cálculo de Delta e das raízes reais/complexas.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // 1. Declaração das variáveis para coeficientes, delta e raízes
    float a, b, c;
    float delta, x1, x2, x;
    float parteReal, parteImaginaria;

    // 2. Entrada de dados
    printf("--- Resolução de Equação do Segundo Grau (ax^2 + bx + c = 0) ---\n");
    printf("Digite o valor do coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente c: ");
    scanf("%f", &c);

    // 3. Processamento e Análise de Cenários

    // Cenário 1: O coeficiente 'a' é 0 (Não é uma equação do segundo grau)
    if (a == 0) {
        printf("\n[Aviso] O coeficiente 'a' é zero. Não é uma equação do segundo grau.\n");
        
        if (b == 0) {
            if (c == 0) {
                printf("Identidade verdadeira: qualquer valor de x é solução (infinitas soluções).\n");
            } else {
                printf("Equação impossível: nenhuma solução real.\n");
            }
        } else {
            x = -c / b;
            printf("Trata-se de uma equação do 1º grau. Raiz única: x = %.2f\n", x);
        }
    } 
    else {
        // Cenário 2: Equação do segundo grau válida (a != 0)
        // Cálculo do Discriminante (Delta): Δ = b² - 4ac
        delta = (b * b) - (4 * a * c);

        printf("\nValor calculado de Delta (Δ): %.2f\n", delta);

        // Subscenário 2.1: Delta maior que zero (Duas raízes reais e distintas)
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("A equação possui duas raízes reais e distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } 
        // Subscenário 2.2: Delta igual a zero (Uma raiz real / duas raízes iguais)
        else if (delta == 0) {
            x = -b / (2 * a);
            printf("A equação possui uma raiz real (raízes iguais):\n");
            printf("x = %.2f\n", x);
        } 
        // Subscenário 2.3: Delta menor que zero (Raízes complexas / sem raízes reais)
        else {
            parteReal = -b / (2 * a);
            parteImaginaria = sqrt(-delta) / (2 * a);
            printf("A equação possui raízes complexas (não existem raízes reais):\n");
            printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
            printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
        }
    }

    return 0;
}