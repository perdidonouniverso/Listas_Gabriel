#include <stdio.h>
#include <stdlib.h>

int retorna_maior(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }

}

int main(){
    //Escreva uma função que receba por parâmetro dois números e retorne o maior
    //deles.
    printf("%d", retorna_maior(4,3));

    return 0;
}
