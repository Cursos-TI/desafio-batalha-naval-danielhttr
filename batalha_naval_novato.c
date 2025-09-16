#include <stdio.h>
 
int main() {

    int tabuleiro[10][10];

    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
    }

// Navio I, coordenadas:
    int linha1 = 2;
    int coluna1 = 3;

// Navio II, coordenadas:
    int linha2 = 5;
    int coluna2 = 5;

    if (coluna1 + 2 < 10, linha2 + 2 < 10) {

// Verificando espaços livres
        if (
            tabuleiro[linha1][coluna1] == 0 &&
            tabuleiro[linha1][coluna1 + 1] == 0 &&
            tabuleiro[linha1][coluna1 + 2] == 0 &&

            tabuleiro[linha2][coluna2] == 0 &&
            tabuleiro[linha2 + 1][coluna2] == 0 &&
            tabuleiro[linha2 + 2][coluna2] == 0
        ) {

// Posição do Navio I
            tabuleiro[linha1][coluna1] = 3;
            tabuleiro[linha1][coluna1 + 1] = 3;
            tabuleiro[linha1][coluna1 + 2] = 3;

// Posição do Navio II
            tabuleiro[linha2][coluna2] = 3;
            tabuleiro[linha2 + 1][coluna2] = 3;
            tabuleiro[linha2 + 2][coluna2] = 3;
        } else {
            printf("Erro: Sobreposição de navios.\n");
            return 1;
        }
    } else {
        printf("Erro: Navio estão ocupando mesma posição, colisão existente!!!");
        return 1;
    }

    printf("Tabuleiro:\n\n");
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }

    return 0;

    }
    