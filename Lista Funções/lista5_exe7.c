#include <stdio.h>
#include <stdlib.h>

void funcao(int *num){
    if(*num < 0){
        *num = 0;
    }else{
        *num = *num *5;
    }
}

int main(){
    //Crie uma fun��o que recebe como par�metro um inteiro e iguala esse n�mero a zero
    //caso o n�mero seja negativo, caso o n�mero seja positivo a fun��o deve multiplicar
    //o valor por 5.


    int num;

    scanf("%d", &num);

    funcao(&num);

    return 0;
}
