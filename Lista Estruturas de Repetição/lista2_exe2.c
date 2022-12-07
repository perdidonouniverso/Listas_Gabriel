#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um número inteiro positivo N e imprima todos os
    //números naturais de 0 até N em ordem decrescente.
    int num;
    scanf("%d", &num);
    for(int i = num; i>=0;i--){
        printf("%d ", i);
    }
	return 0;
}
