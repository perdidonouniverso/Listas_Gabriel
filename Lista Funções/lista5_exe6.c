#include <stdio.h>
#include <stdlib.h>

void acrescenta_20(int *num){
    *num = *num + 20;
}

int main(){
    //Escreva uma função que recebe como parâmetro um número inteiro e acrescenta 20
    //nesse número.

    int num;

    scanf("%d", &num);

    acrescenta_20(&num);

    return 0;
}
