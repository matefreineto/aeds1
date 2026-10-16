#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char nome[] = "Maria";
    int idade = 25;
    float altura = 1.68;

    // Escreve os dados formatados dentro do arquivo "dados.txt"
    fprintf(arquivo, "Nome: %s | Idade: %d | Altura: %.2f\n", nome, idade, altura);

    fclose(arquivo);
    return 0;
}