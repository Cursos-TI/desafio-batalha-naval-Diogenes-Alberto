#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TamanhoBarco 4
#define TamanhoMatriz 10
#define ValorBarco 3
void MostrarNavioHorizontal(int posicaoInicialx,int posicaoInicialy,int matriz[TamanhoMatriz][TamanhoMatriz])
{
    for(int x=0;x<TamanhoBarco;x++)
    {
        printf("A %dº posicao do barco e x:%d y:%d valor:%d \n",x+1,posicaoInicialx,posicaoInicialy+x,matriz[posicaoInicialx][posicaoInicialy+x]);
    }

}
void PreencherNavioHorizontal(int posicaoInicialx,int posicaoInicialy,int matriz[TamanhoMatriz][TamanhoMatriz])
{
    for(int x=0;x<TamanhoBarco;x++)
    {
        matriz[posicaoInicialx][posicaoInicialy+x]=3;
    }

}
void PreencherNavioVertical(int posicaoInicialx,int posicaoInicialy,int matriz[TamanhoMatriz][TamanhoMatriz])
{
    for(int x=0;x<TamanhoBarco;x++)
    {
        matriz[posicaoInicialx+x][posicaoInicialy]=3;
    }

}
void MostrarNavioVertical(int posicaoInicialx,int posicaoInicialy,int matriz[TamanhoMatriz][TamanhoMatriz])
{
    for(int x=0;x<TamanhoBarco;x++)
    {
        printf("A %dº posicao do barco e x:%d y:%d valor:%d \n",x+1,posicaoInicialx+x,posicaoInicialy,matriz[posicaoInicialx+x][posicaoInicialy]);
    }

}
void MostrarMatriz(int matriz[TamanhoMatriz][TamanhoMatriz])
{
    printf("--------------Inicio Matriz----------------\n");
    for(int x=0;x<TamanhoMatriz;x++)
    {
        for (int y = 0; y < TamanhoMatriz; y++)
        {
            printf("%d \t",matriz[x][y]);
        }
        printf("\n");        
    }
    printf("---------------Final Matriz----------------\n");
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).

    int tabuleiro[TamanhoMatriz][TamanhoMatriz]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    MostrarMatriz(tabuleiro);
    PreencherNavioHorizontal(0,0,tabuleiro);
    PreencherNavioVertical(2,5,tabuleiro);
    MostrarMatriz(tabuleiro);
    MostrarNavioHorizontal(0,0,tabuleiro);
    MostrarNavioVertical(2,5,tabuleiro);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
