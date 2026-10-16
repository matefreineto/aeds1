/*
    Programa de conversão de medidas.

    Biblioteca utilizada:
    stdio.h
    - Permite entrada e saída de dados.
    - scanf() recebe dados digitados pelo usuário.
    - printf() exibe mensagens e resultados na tela.
*/

#include <stdio.h>

int main() {
    int opcao;
    float valor, resultado;

    // Exibição do menu
    printf("MENU DE CONVERSAO\n");
    printf("1 - De Quilometros para Milhas\n");
    printf("2 - De Metros para Pes\n");
    printf("3 - De Celsius para Fahrenheit\n");
    printf("4 - De Quilogramas para Libras\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch(opcao) {

        case 1:
            resultado = valor * 0.621371;
            printf("%.2f Quilometros = %.2f Milhas\n",
                   valor, resultado);
            break;

        case 2:
            resultado = valor * 3.28084;
            printf("%.2f Metros = %.2f Pes\n",
                   valor, resultado);
            break;

        case 3:
            resultado = (valor * 9.0 / 5.0) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n",
                   valor, resultado);
            break;

        case 4:
            resultado = valor * 2.20462;
            printf("%.2f Quilogramas = %.2f Libras\n",
                   valor, resultado);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}