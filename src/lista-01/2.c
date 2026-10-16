#include <stdio.h> // Biblioteca padrão de entrada e saída. 
                   // É utilizada para funções como printf (para exibir mensagens na tela) 
                   // e scanf (para ler os valores digitados pelo usuário).

int main() {
    // Declaração das variáveis para armazenar os três números reais
    float num1, num2, num3, maior;

    // Entrada de dados: solicitando os números ao usuário
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número real: ");
    scanf("%f", &num3);

    // Processamento: assumimos inicialmente que o primeiro número é o maior
    maior = num1;

    // Verifica se o segundo número é maior que o atual 'maior'
    if (num2 > maior) {
        maior = num2;
    }

    // Verifica se o terceiro número é maior que o atual 'maior'
    if (num3 > maior) {
        maior = num3;
    }

    // Saída de dados: exibe o maior valor encontrado
    printf("O maior valor entre os três números é: %.2f\n", maior);

    return 0;
}