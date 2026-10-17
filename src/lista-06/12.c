/* Q12: Torres de Hanoi usando recursao.
   Entrada: numero positivo de discos. Processamento: mover n-1, mover o maior,
   mover n-1. Saida: sequencia exata dos movimentos.
   stdio.h fornece printf() e scanf(). */
#include <stdio.h>

int leiaQuantidadeDiscos(void) {
    int discos;
    do { printf("Quantidade de discos (1 a 20): "); scanf("%d", &discos); } while (discos < 1 || discos > 20);
    return discos;
}
void torresDeHanoi(int discos, int origem, int destino, int temporario) {
    if (discos == 1) {
        printf("%d -> %d\n", origem, destino);
        return;
    }
    torresDeHanoi(discos - 1, origem, temporario, destino);
    printf("%d -> %d\n", origem, destino);
    torresDeHanoi(discos - 1, temporario, destino, origem);
}
int main(void) {
    int discos = leiaQuantidadeDiscos();
    torresDeHanoi(discos, 1, 3, 2);
    return 0;
}
