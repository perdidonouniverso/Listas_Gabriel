#include <stdio.h>
#include <stdlib.h>

int main(){
    //Crie um programa que contenha uma matriz de float contendo tr�s linhas e tr�s
    //colunas. Imprima o endere�o de cada posi��o dessa matriz.

    float num[3][3];
    int *p = &num[0][0];
    for(int i = 0; i < 3; i++){
        for(int t = 0; t < 9; t++){
            printf("%d ", (p+i));
        }
    }


    return 0;
}
