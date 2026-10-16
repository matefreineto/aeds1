/*
 * Arquivo: 11.c
 * Objetivo: Calcular o tempo de viagem com base na distância (km) e velocidade média (km/h).
 *           Fórmula: Tempo = Distância / Velocidade
 * 
 * Biblioteca utilizada:
 * - <stdio.h>: Emprego das funções de leitura e escrita padrão no terminal.
 */

#include <stdio.h>

int main() {
    // 1. Entrada de dados
    float distancia, velocidadeMedia, tempo;
    
    printf("Digite a distancia da viagem (em km): ");
    scanf("%f", &distancia);
    
    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidadeMedia);
    
    // Tratamento para evitar divisão por zero caso a velocidade informada seja 0
    if (velocidadeMedia <= 0) {
        printf("A velocidade media deve ser maior que zero.\n");
        return 1;
    }
    
    // 2. Processamento
    tempo = distancia / velocidadeMedia;
    
    // 3. Saída de dados
    printf("O tempo estimado de viagem e de %.2f horas.\n", tempo);
    
    return 0;
}