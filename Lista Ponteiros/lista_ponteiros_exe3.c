#include <stdio.h>
#include <stdlib.h>

int main(){
    //Crie um programa que contenha um array de inteiros contendo cinco elementos.
    //Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
    //dobro de cada valor lido

    float num[5] = {1,2,3,4,5};
    int *p = num;

    for(int i = 0; i < 5; i++){
        scanf("%d", *(p+i));
        //Nao sei poque nao funciona

    }
    for(int i = 0; i < 5; i++){
        printf(" %d ", *p);
    }


    return 0;
}
