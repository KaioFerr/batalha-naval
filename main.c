#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int imprimirTabuleiro(int matriz[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int colocandoNavio(int linha, int coluna, int matriz[8][8], int navio[3])
{
    for (int j = 0; j <= coluna; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            matriz[linha][j] = navio[i];
        }
    }
}

int alimentarMatriz(int matriz[8][8])
{
    srand(time(NULL));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            matriz[i][j] = 0;
        }
        printf("\n");
    }
    return 0;
}

void compararPosicoes(int linha, int coluna, int matriz[8][8])
{
    if (matriz[linha][coluna] == 1)
    {
        printf("\nVoce acertou o navio\n");
    }
    else
        printf("\nVoce acertou na agua\n");
}

int main()
{
    int linha = rand() % 9;
    int coluna = rand() % 9;
    // int tabuleiroJogador[8][8];
    int tabuleiroComputador[8][8];
    alimentarMatriz(tabuleiroComputador);
    //colocandoNavio();
    imprimirTabuleiro(tabuleiroComputador);

    printf("\n\nDigite um valor (0-7) para linha: ");
    scanf("%d", &linha);
    printf("Digite um valor (0-7) para coluna: ");
    scanf("%d", &coluna);
    compararPosicoes(linha, coluna, tabuleiroComputador);

    return 0;
}

