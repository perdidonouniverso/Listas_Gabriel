#include <stdio.h>
#include <stdlib.h>

void acrescenta_20(int *num){
    *num = *num + 20;
}

int main(){
    //Escreva uma fun��o que recebe como par�metro um n�mero inteiro e acrescenta 20
    //nesse n�mero.

    int num;

    scanf("%d", &num);

    acrescenta_20(&num);

    return 0;
}
