#include <stdio.h>
#include <stdlib.h>

int main() {
    // Criando um tabuleiro 5x5
    int tabuleiro0[5][5] = {0}; // inicializa todas as posições com 0 (sem navio)

    // Posição inicial do primeiro navio (vertical)
    int x1 = 1, y1 = 1;
    // Posição inicial do segundo navio (horizontal)
    int x2 = 3, y2 = 0;

    // Colocando um navio vertical (3 partes) no tabuleiro 5x5
    for (int i = 0; i < 3; i++) {
        tabuleiro0[x1 + i][y1] = 1; // marca como ocupado
        printf("Navio Vertical - Parte %d: (%d, %d)\n", i + 1, x1 + i, y1);
    }

    // Colocando um navio horizontal (4 partes) no tabuleiro 5x5
    for (int j = 0; j < 4; j++) {
        tabuleiro0[x2][y2 + j] = 1; // marca como ocupado
        printf("Navio Horizontal - Parte %d: (%d, %d)\n", j + 1, x2, y2 + j);
    }


    // Criando um tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // inicializa todas as posições como 0

    // Posicionar quatro navios:
    // 1 - Vertical
    // 2 - Horizontal
    // 3 - Diagonal principal
    // 4 - Diagonal secundária

    // Navio 1: Vertical (tamanho 4) a partir da posição (0,0)
    for (int i = 0; i < 4; i++) {
        tabuleiro[0 + i][0] = 3; // 3 significa ocupado
    }

    // Navio 2: Horizontal (tamanho 5) a partir da posição (2,2)
    for (int j = 0; j < 5; j++) {
        tabuleiro[2][2 + j] = 3;
    }

    // Navio 3: Diagonal principal (tamanho 4) a partir da posição (5,5)
    for (int k = 0; k < 4; k++) {
        tabuleiro[5 + k][5 + k] = 3;
    }

    // Navio 4: Diagonal secundária (tamanho 3) a partir da posição (9,0)
    for (int m = 0; m < 3; m++) {
        tabuleiro[9 - m][0 + m] = 3;
    }

    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]); // imprime cada posição (0 ou 3)
        }
        printf("\n"); // quebra de linha ao final de cada linha da matriz
    }

    return 0;
}
