#include <stdio.h>
#include <stdlib.h>

int main(){
    //Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
    //contidos em sua diagonal secundária.

    int mat[3][3];

    for(int i = 0; i<3; i++){
        for(int x = 0; x<3; x++){
            scanf("%d", &mat[i][x]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int x = 0; x<3; x++){
            if((i+x)==2){
                printf("%d\t", mat[i][x]);
            }
            if(x==2){
                printf("\n");
            }

        }
    }


    return 0;
}
