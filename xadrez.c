#include <stdio.h>

// Função recursiva para mover a Torre
void torre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    torre(casas - 1);
}

// Função recursiva para mover o Bispo
void bispoRec(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima Direita\n");
    bispoRec(casas - 1);
}

// Função com loops aninhados para o Bispo
void bispoLoop(int passos) {
    int i, j;
    for (i = 0; i < passos; i++) {
        for (j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

// Função recursiva para mover a Rainha
void rainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    rainha(casas - 1);
}

// Função para mover o Cavalo com loops aninhados
void cavalo() {
    int i, j;
    int cont = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                continue;
            }

            if ((i == 2 && j == 1) || (i == 1 && j == 2)) {
                printf("Cima Cima Direita\n");
                cont++;

                if (cont >= 4) {
                    break;
                }
            }
        }

        if (cont >= 4) {
            break;
        }
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    torre(5);
    printf("\n");

    // Bispo com recursao
    printf("Movimento do Bispo (Recursivo):\n");
    bispoRec(5);
    printf("\n");

    // Bispo com loops
    printf("Movimento do Bispo (Loops):\n");
    bispoLoop(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    rainha(8);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    cavalo();

    return 0;
}

