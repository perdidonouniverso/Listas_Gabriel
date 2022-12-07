#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
    //mostre todos os valores lidos juntamente com a média dos valores.

    int vet[5];
    int y,u, media;

    for(int i = 0; i <5; i++){
        scanf("%d", &vet[i]);
        y = y +vet[i];
    }
    media = y/5;
    for(int i = 0; i <5; i++){
        printf("%d ", vet[i]);
    }
    printf("\nMedia %d", media);



    return 0;
}
