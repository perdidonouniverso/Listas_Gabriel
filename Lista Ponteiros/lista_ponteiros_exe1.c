#include <stdio.h>
#include <stdlib.h>

int main(){
    //Crie um programa que contenha um array de float contendo 10 elementos. Imprima
    //o endereço de cada posição desse array.
    float num[10];
    int *p = num;

    for(int i = 0; i < 10; i++){
        printf("%d ", p[i]);
    }


    return 0;
}
