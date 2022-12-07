#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
    //diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na
    //tela.

    int mat[5][5];
    int maior=0, linha, coluna;

    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            if(i==x){
                mat[i][x] = 1;
            }else{
                mat[i][x] = 0;
            }
        }
    }
    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            printf("%d \t " ,mat[i][x]);
            if(x == ){
                printf("\n");
            }
        }
    }



    return 0;
}
