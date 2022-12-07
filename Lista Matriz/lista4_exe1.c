#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor
    //valor contido nessa matriz.
    int mat[3][3];
    int menor=999999;

    for(int i = 0; i<3; i++){
        for(int x = 0; x<3; x++){
            scanf("%d", &mat[i][x]);
            if(mat[i][x]< menor){
                menor = mat[i][x];
            }
        }
    }
    printf("\nMenor numero: %d", menor);


    return 0;
}



