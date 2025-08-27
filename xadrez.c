#include <stdio.h>

int main() {
    // ----------------------------
    // Movimento da Torre: 5 casas para a direita usando FOR
    // ----------------------------
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ----------------------------
    // Movimento do Bispo: 5 casas na diagonal (cima e direita) usando WHILE
    // ----------------------------
    int contador_bispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // ----------------------------
    // Movimento da Rainha: 8 casas para a esquerda usando DO-WHILE
    // ----------------------------
    int contador_rainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    return 0;
}
