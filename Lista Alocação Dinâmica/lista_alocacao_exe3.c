#include <stdio.h>
#include <stdlib.h>

int aloca_memoria(int num){
    return (int*) malloc(num * sizeof(int));

}

int main(){
    //Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
    //alocados dinamicamente. Esta função deve receber N como parâmetro do tipo int. O
    //array deve ser preenchido com valores de 0 a N − 1.


    int *p;
    int num;
    printf("Digite quantas posicoes de vetor de inteiro precisa:\n");
    scanf("%d", &num);

    if(aloca_memoria(num) == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }

    p = aloca_memoria(num);

    for(int i = 0; i < num; i++){
        p[i] = i;
    }

    for(int i = 0; i < num; i++){
        printf("%d", p[i]);
    }


    return 0;
}
