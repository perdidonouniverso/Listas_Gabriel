#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
    //dois números forem iguais, imprima a mensagem “Números iguais”.
    int num1, num2;
    printf("Digite o 1° numero");
    scanf("%d", &num1);
    printf("Digite o 2° numero");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("O numero %d e maior que %d", num2, num1);
    }
    else if(num1 > num2){
        printf("O numero %d e maior que %d", num1, num2);
    }else{
        printf("Sao iguais");
    }
}

