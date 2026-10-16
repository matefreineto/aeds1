/*
 Questao 4: calcular o peso ideal, validando sexo e altura.
 Formulas adotadas no exercicio:
 Masculino: (72.7 * altura) - 58
 Feminino:  (62.1 * altura) - 44.7

 Biblioteca:
 stdio.h: fornece printf() e scanf(), usadas para saida e entrada.
*/
#include <stdio.h>

int main(void) {
    char sexo;
    float altura, pesoIdeal;

    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Sexo invalido. Digite M ou F.\n");
        }
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    do {
        printf("Informe a altura (maior que 0 e ate 2.5 metros): ");
        scanf("%f", &altura);

        if (altura <= 0 || altura > 2.5) {
            printf("Altura invalida.\n");
        }
    } while (altura <= 0 || altura > 2.5);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7f * altura) - 58.0f;
    } else {
        pesoIdeal = (62.1f * altura) - 44.7f;
    }

    printf("Peso ideal: %.2f kg\n", pesoIdeal);
    return 0;
}
