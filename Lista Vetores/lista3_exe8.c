#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que receba do usuário dois arrays, A e B, com 10 números
    //inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
    //do array C

    int vet1[10];
    int vet2[10];
    int vet3[10];
    printf("Primeiros numeros\n");
    for(int i = 0; i <10; i++){
        scanf("%d", &vet1[i]);
    }
    printf("\nSegundos numeros\n");
    for(int i = 0; i <10; i++){
        scanf("%d", &vet2[i]);
    }
    for(int i = 0; i <10; i++){
        vet3[i] = vet1[i] - vet2[i];
    }
    printf("\nnumeros vetor numeros\n");
    for(int i = 0; i <10; i++){
        printf("%d  ", vet3[i]);
    }



    return 0;
}
