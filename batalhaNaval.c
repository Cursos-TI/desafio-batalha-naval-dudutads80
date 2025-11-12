#include <stdio.h>
// Desafio Batalha Naval - MateCheck
#define LINHAS 10
#define COLUNAS 10

int main(){
  int matriz [LINHAS][COLUNAS]; 
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            matriz[i][j] = 0;
            printf("%d ", matriz[i][j]);
        } 
        printf("\n");
    }


    return 0;
}