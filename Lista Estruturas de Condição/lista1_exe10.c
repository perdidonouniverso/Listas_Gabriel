#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa para verificar se determinado número inteiro lido é divisível por 3
    //ou 5, mas não simultaneamente pelos dois.

    int num;
    scanf("%d", &num);
    if(num%5 == 0 && num%3 != 0 || num%5 != 0 && num%3 == 0){
        printf("E dividivel por 3 ou 5");
    }
    else{
        printf("Nao e divizivel por 5 ou 3");
    }

    return 0;
}



