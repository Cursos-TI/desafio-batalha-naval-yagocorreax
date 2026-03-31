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

    return 0;
}
