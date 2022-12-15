#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um valor inteiro N não negativo. Se o valor de N
    //for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
    //Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
    //deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.

    int num;

    do{
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }while(num <= 0);

    int *v;
    v = (int*) malloc(num * sizeof(int));
    if(v == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }
    int num1;

    for(int i = 0; i < num; i++){
        do{
            scanf("%d", &num1);
        }while(num1 < 2);
        v[i] = num1;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", v[i]);
    }


    return 0;
}
