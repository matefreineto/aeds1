/*
    Programa: Nome do mês correspondente ao número digitado

    Biblioteca utilizada:
    stdio.h -> Permite usar funções de entrada e saída,
               como printf() e scanf().
*/

#include <stdio.h>

int main()
{
    int mes;

    // Solicita ao usuário um número
    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &mes);

    // Estrutura de seleção múltipla
    switch (mes)
    {
        case 1:
            printf("Janeiro\n");
            break;

        case 2:
            printf("Fevereiro\n");
            break;

        case 3:
            printf("Marco\n");
            break;

        case 4:
            printf("Abril\n");
            break;

        case 5:
            printf("Maio\n");
            break;

        case 6:
            printf("Junho\n");
            break;

        case 7:
            printf("Julho\n");
            break;

        case 8:
            printf("Agosto\n");
            break;

        case 9:
            printf("Setembro\n");
            break;

        case 10:
            printf("Outubro\n");
            break;

        case 11:
            printf("Novembro\n");
            break;

        case 12:
            printf("Dezembro\n");
            break;

        default:
            printf("Numero invalido! Digite um valor entre 1 e 12.\n");
    }

    return 0;
}