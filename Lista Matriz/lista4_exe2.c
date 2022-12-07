#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior
    //valor contido nessa matriz e a sua localização (linha e coluna).

    int mat[4][4];
    int maior=0, linha, coluna;

    for(int i = 0; i<4; i++){
        for(int x = 0; x<4; x++){
            scanf("%d", &mat[i][x]);
            if(mat[i][x] > maior){
                maior = mat[i][x];
                linha = i;
                coluna = x;
            }
        }
    }
    printf("\nMaior numero: %d\nLocalizacao: Linha: %d\nColuna: %d", maior,linha, coluna );


    return 0;
}
