#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.
    int num1, num2;
    printf("Digite o primeiro numero");
    scanf("%d", &num1);
    printf("Digite o segundo numero");
    scanf("%d", &num2);
    system("cls");
    if(num1 > num2){
        printf("Numero %d e maior que %d", num1, num2);
    }else{
        printf("Numero %d e maior que %d", num2, num1);
    }

    return 0;
}


