#include <stdio.h>
#include <stdlib.h>

int main(){
    //Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
    //uantos valores pares foram armazenados nesse vetor


    int vet[10];

    for(int i = 0; i <10; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i <10; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }



    return 0;
}
