#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel por 3
    //ou 5, mas n�o simultaneamente pelos dois.

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



