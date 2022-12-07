#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um vetor de oito posições. Em seguida, leia também
    //dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
    //programa deverá exibir a soma dos valores encontrados nas respectivas posições X
    //e Y.


    int vet[8];
    int num1,num2;

    printf("Digite os numeros");
    for(int i = 0; i <8; i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite uma posicao");
    scanf("%d", &num1);
    printf("Digite uma posicao");
    scanf("%d", &num2);


    printf("\nposicao 1 %d\nposicao 2 %d", vet[num1], vet[num2]);



    return 0;
}
