#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// FUNÇÃO PARA POSICIONAR OS NAVIOS
void posicionarNavio(int tabuleiro[10][10], int linha, int coluna, int tamanho, char direcao[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(direcao, "horizontal") == 0) {
            tabuleiro[linha][coluna + i] = 3;
        } else if (strcmp(direcao, "vertical") == 0) {
            tabuleiro[linha + i][coluna] = 3;
        } else if (strcmp(direcao, "diagonal_principal") == 0) {
            tabuleiro[linha + i][coluna + i] = 3;
        } else if (strcmp(direcao, "diagonal_secundaria") == 0) {
            tabuleiro[linha + i][coluna - i] = 3;
        }
    }
}

// CONE: EXPANDE PARA BAIXO
void posicionarCone(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = -i; j <= i; j++) {
            int lin = linha + i;
            int col = coluna + j;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10) {
                tabuleiro[lin][col] = 4; // NUMERO QUE VAI REPRESENTAR O CONE NO TABULEIRO
            }
        }
    }
}

// CRUZ: LINHA E COLUNA COM O CENTRO COMO ORIGEM
void posicionarCruz(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = -tamanho; i <= tamanho; i++) {
        int lin = linha + i;
        int col = coluna + i;

        if (linha + i >= 0 && linha + i < 10)
            tabuleiro[linha + i][coluna] = 5;

        if (coluna + i >= 0 && coluna + i < 10)
            tabuleiro[linha][coluna + i] = 5; // NUMERO QUE VAI REPRESENTAR A CRUZ NO TABULEIRO
    }
}

// OCTAEDRO: FORMA DE LOSANGO COM CENTRO COMO ORIGEM
void posicionarOctaedro(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = -tamanho; i <= tamanho; i++) {
        for (int j = -tamanho; j <= tamanho; j++) {
            // A LÓGICA PARA A FORMA DE UM LOSANGO
            if (abs(i) + abs(j) <= tamanho) {
                int lin = linha + i;
                int col = coluna + j;

                // VERIFICA SE A POSIÇÃO ESTÁ DENTRO DOS LIMITES DO TABULEIRO
                if (lin >= 0 && lin < 10 && col >= 0 && col < 10) {
                    tabuleiro[lin][col] = 6;  // NUMERO QUE VAI REPRESENTAR O OCTAEDRO NO TABULEIRO
                }
            }
        }
    }
}


int main() {
    int tabuleiro[10][10];
    int linha, coluna;

    // INICIALIZA O TABULEIRO COM ÁGUA
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // POSICIONA NAVIOS NO TABULEIRO COM A FUNÇÃO RECURSIVA VOID
    posicionarNavio(tabuleiro, 2, 4, 3, "horizontal");
    posicionarNavio(tabuleiro, 5, 1, 3, "vertical");
    posicionarNavio(tabuleiro, 1, 1, 3, "diagonal_principal");
    posicionarNavio(tabuleiro, 1, 8, 3, "diagonal_secundaria");

    // POSICIONA AS HABILIDADES NO TABULEIRO
    posicionarCone(tabuleiro, 0, 5, 3);        // CONE NO TOPO
    posicionarCruz(tabuleiro, 6, 6, 2);        // CRUZ NO CENTRO INFERIOR
    posicionarOctaedro(tabuleiro, 4, 2, 2);    // OCTAEDRO NO CENTRO-ESQUERDA

     // EXIBE AS LETRAS DAS COLUNAS
     printf("   A B C D E F G H I J\n");
     // IMPRIME O NÚMERO DA LINHA LATERAL
     for (linha = 0; linha < 10; linha++) {
        printf("%2d ", linha + 1);
        for (coluna = 0; coluna < 10; coluna++) {
            // IMPRIME O VALOR DO TABULEIRO
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }    
    
    

    return 0;
}


