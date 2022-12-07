#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que preencha um vetor com 10 números reais. Em seguida,
    //calcule e mostre na tela a quantidade de números negativos e a soma dos números
    //positivos desse vetor.


    int vet[10];
    int negativo, positivo=0;

    for(int i = 0; i <10; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            negativo++;
        }
        if(vet[i] > 0){
            positivo = positivo + vet[i];
        }
    }
    printf("\nquantidade de negativos %d\nSoma dos positivos %d", negativo, positivo);




    return 0;
}
