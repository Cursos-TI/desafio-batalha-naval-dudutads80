#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3


int main() {
   
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa todas as posições com AGUA (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

       
    // Navio 1: Horizontal (começa na linha 2, coluna 1)
    // Requisito funcional: Garantir que o navio esteja dentro dos limites.
    
    int navio1_linha_inicio = 2;
    int navio1_coluna_inicio = 1;

    // Posicionamento do Navio 1 na matriz do tabuleiro
    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        
        if (navio1_coluna_inicio + j < TAMANHO_TABULEIRO) {
            tabuleiro[navio1_linha_inicio][navio1_coluna_inicio + j] = NAVIO;
        }
    }

    // Navio 2: Vertical (começa na linha 5, coluna 5)
        
    int navio2_linha_inicio = 5;
    int navio2_coluna_inicio = 5;

    // Posicionamento do Navio 2 na matriz do tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (navio2_linha_inicio + i < TAMANHO_TABULEIRO) {
            
            tabuleiro[navio2_linha_inicio + i][navio2_coluna_inicio] = NAVIO;
        }
    }


    return 0;
}


    printf("--- Tabuleiro Batalha Naval  ---\n");
    printf("0 = Agua | 3 = Navio\n\n");

       
    printf("'A','B','C','D','E','F','G','H','I','J'\n");
       
    }
    printf("\n");
    printf("--------------------------------------\n");


    // Loops aninhados para percorrer linhas (i) e colunas (j)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Imprime o número da linha no início de cada linha
        printf("%d| ", i);

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
           
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}