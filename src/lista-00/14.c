/*
 * Arquivo: 14.c
 * Objetivo: Calcular quantas latas de tinta são necessárias para pintar uma parede,
 *           sabendo que cada lata cobre 18 m².
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Usada para interagir com o usuário, coletando largura/altura e exibindo 
 *   a quantidade calculada de latas.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float largura, altura, areaParede;
    int qtdLatas;
    
    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);
    
    // 2. Processamento
    areaParede = largura * altura;
    // Cada lata cobre 18 m². Usamos conversão implícita ou ceil lógica inteira somando divisão.
    // Como estamos sem a biblioteca math.h, podemos calcular adicionando 1 se houver resto 
    // ou usando a lógica de arredondamento inteiro por divisão ajustada:
    qtdLatas = (int)(areaParede / 18);
    if ((areaParede / 18) > qtdLatas) {
        qtdLatas = qtdLatas + 1;
    }
    // Se a área for 0 ou menor que zero por segurança:
    if (areaParede <= 0) {
        qtdLatas = 0;
    }
    
    // 3. Saída de dados
    printf("Area da parede: %.2f m2\n", areaParede);
    printf("Serao necessarias %d lata(s) de tinta.\n", qtdLatas);
    
    return 0;
}