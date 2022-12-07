#include <stdio.h>
#include <stdlib.h>

int main(){
    //Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
    //tela os valores lidos na ordem inversa.

    int vet[6];

    for(int i = 0; i <6; i++){
        scanf("%d", &8vet[i]);
    }
    for(int i = 6; i >0; i--){
        printf("%d ", vet[i-1]);
    }

    return 0;
}
