#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que receba do usu�rio um vetor X com 10 posi��es. Em seguida
    //ser impressos o maior e o menor elemento desse vetor


    int vet[10];
    int maior=0, menor=9999999;

    for(int i = 0; i <10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("\nMaior %d\nMenor %d", maior, menor);




    return 0;
}
