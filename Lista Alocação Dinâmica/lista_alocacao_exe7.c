#include <stdio.h>
#include <stdlib.h>

int aloca_memoria(int num[], int num1[]){
    //Esta com um problema, ele nao esta vindo o vetor certo, nao sei porque
    int *C;
    C = (int*) malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        C[i] = num[i] + num1[i];
    }
    return *C;

}

int main(){
    //Crie um programa que pergunte ao usuário quantas linhas e quantas colunas uma
    //matriz deve conter, em seguida aloque dinamicamente essa matriz utilizando
    //ponteiro para ponteiro. Essa matriz deve ser preenchida pelo usuário e ao final ser
    //exibida na tela


    int *p;
    int A[5], B[5];
    for(int x = 0; x<5; x++){
        printf("digite o numero para vetor A:\n");
        scanf("%d", &A);
    }
    for(int x = 0; x<5; x++){
        printf("digite o numero para vetor B:\n");
        scanf("%d", &B);
    }


    p = aloca_memoria(A, B);

    return 0;
}
