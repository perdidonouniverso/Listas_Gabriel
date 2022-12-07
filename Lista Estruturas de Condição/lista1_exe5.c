#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    //● O número digitado ao quadrado.
    //● A raiz quadrada do número digitado.
    int num;
    scanf("%d",&num);
    printf("%d\n", (num * num));
    printf("%.2f\n", sqrt(num));


    return 0;
}
