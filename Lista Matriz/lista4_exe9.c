#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma
    //dos elementos dessa matriz que estão acima da diagonal principal.


    //Nao sei se ta carto!!!!
    int mat[5][5];
    int num, aux;

    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            scanf("%d", &mat[i][x]);
        }
    }
    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            if(i==x){
                aux = i;
                i=x;
                num = num + mat[i][x];
                i = aux;
            }


        }
    }
    printf("%d", num);


    return 0;
}
