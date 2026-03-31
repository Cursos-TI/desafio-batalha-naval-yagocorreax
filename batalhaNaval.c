#include <stdio.h>

int main() {

    // =========================
    // TABULEIRO 10x10
    // =========================
    int tabuleiro[10][10];

    // Inicializa tudo com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // =========================
    // NAVIOS (tamanho 3)
    // =========================
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linhaH = 2, colunaH = 3; // horizontal
    int linhaV = 5, colunaV = 6; // vertical

    // =========================
    // VALIDAÇÃO (dentro do tabuleiro)
    // =========================
    if (colunaH + 3 > 10 || linhaV + 3 > 10) {
        printf("Erro: navio fora do tabuleiro.\n");
        return 1;
    }

    // =========================
    // POSICIONAR NAVIO HORIZONTAL
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // =========================
    // POSICIONAR NAVIO VERTICAL
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // =========================
    // EXIBIR TABULEIRO
    // =========================
    printf("\nTabuleiro:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    #include <stdio.h>

int main() {

    // =========================
    // TABULEIRO 10x10
    // =========================
    int tabuleiro[10][10];

    // Inicializa com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // =========================
    // NAVIOS (tamanho 3)
    // =========================
    int navio[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linhaH = 1, colunaH = 1; // horizontal
    int linhaV = 5, colunaV = 2; // vertical
    int linhaD1 = 0, colunaD1 = 0; // diagonal principal
    int linhaD2 = 0, colunaD2 = 9; // diagonal secundária

    // =========================
    // VALIDAÇÃO DE LIMITES
    // =========================
    if (colunaH + 3 > 10 || linhaV + 3 > 10 ||
        linhaD1 + 3 > 10 || colunaD1 + 3 > 10 ||
        linhaD2 + 3 > 10 || colunaD2 - 2 < 0) {
        printf("Erro: navio fora do tabuleiro.\n");
        return 1;
    }

    // =========================
    // NAVIO HORIZONTAL
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0) {
            printf("Erro: sobreposição.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + i] = navio[i];
    }

    // =========================
    // NAVIO VERTICAL
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {
            printf("Erro: sobreposição.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = navio[i];
    }

    // =========================
    // NAVIO DIAGONAL (↘)
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaD1 + i][colunaD1 + i] != 0) {
            printf("Erro: sobreposição.\n");
            return 1;
        }
        tabuleiro[linhaD1 + i][colunaD1 + i] = navio[i];
    }

    // =========================
    // NAVIO DIAGONAL (↙)
    // =========================
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0) {
            printf("Erro: sobreposição.\n");
            return 1;
        }
        tabuleiro[linhaD2 + i][colunaD2 - i] = navio[i];
    }

    // =========================
    // EXIBIR TABULEIRO
    // =========================
    printf("\nTabuleiro:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    #include <stdio.h>

int main() {

    // =========================
    // TABULEIRO 10x10
    // =========================
    int tabuleiro[10][10];

    // Inicializa com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // =========================
    // NAVIOS (exemplo simples)
    // =========================
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][2 + i] = 3; // horizontal
        tabuleiro[5 + i][5] = 3; // vertical
    }

    // =========================
    // MATRIZES DE HABILIDADE (5x5)
    // =========================
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Construção do CONE
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // Construção da CRUZ
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // Construção do OCTAEDRO (losango)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // =========================
    // POSIÇÃO DAS HABILIDADES
    // =========================
    int origemConeL = 1, origemConeC = 1;
    int origemCruzL = 5, origemCruzC = 5;
    int origemOctL = 7, origemOctC = 2;

    // =========================
    // SOBREPOR HABILIDADES (valor 5)
    // =========================

    // CONE
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            int linha = origemConeL + i - 2;
            int coluna = origemConeC + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // CRUZ
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            int linha = origemCruzL + i - 2;
            int coluna = origemCruzC + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // OCTAEDRO
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            int linha = origemOctL + i - 2;
            int coluna = origemOctC + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // =========================
    // EXIBIR TABULEIRO
    // =========================
    printf("\nTabuleiro com habilidades:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (tabuleiro[i][j] == 0)
                printf("~ "); // água
            else if (tabuleiro[i][j] == 3)
                printf("N "); // navio
            else if (tabuleiro[i][j] == 5)
                printf("* "); // habilidade
        }
        printf("\n");
    }

    return 0;
}

}
