#include <stdio.h>
// Desafio Batalha Naval - MateCheck


#define TAMANHO 10
#define TAMANHO_NAVIO 3
#define NAVIO 3
#define AGUA 0


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0};

    // coordenadas dos navios ( linha coluna)
    int linha_h = 2, coluna_h = 4;  // navio horizontal
    int linha_v = 5, coluna_v= 7;  // navio vertical

    // verificacao de limite navio horizontal
    if (coluna_h + TAMANHO_NAVIO > TAMANHO){
        printf ("erro navio fora limite tabuleiro. \n");
        return 1;
    }
 
    // verificacao de limite navio vertical
    if (linha_v + TAMANHO_NAVIO > TAMANHO){
        printf ("erro navio fora limite tabuleiro. \n");
        return 1;

    }    
    for (int i = 0; i <TAMANHO_NAVIO; i++) { 
if (tabuleiro[linha_h][coluna_h + i] == NAVIO || tabuleiro[linha_v + i][coluna_v] == NAVIO)

     for (int i = 0; i <TAMANHO_NAVIO; i++) {
        tabuleiro[linha_h][coluna_h + i] = NAVIO;
    }
    for (int i=0; i <TAMANHO_NAVIO; i++) {
       tabuleiro[linha_v + i][coluna_v] = NAVIO;
    }


      printf("Tabuleiro Batalha Naval:\n\n");
      for(int i = 0; i <TAMANHO; i++){
        for(int j = 0; j <TAMANHO; j++){
            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");

      }
     return 0;

    }














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

    

