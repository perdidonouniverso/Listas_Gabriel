#include <stdio.h>
#include <stdlib.h>

int main(){
    //Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
    //seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
    //imprima

    printf("Digite o tamanho do vetor:\n");
    int tam;
    scanf("%d", &tam);

    int *p;
    p = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < tam; i++){
        printf("%d ", p[i]);
    }


    return 0;
}


