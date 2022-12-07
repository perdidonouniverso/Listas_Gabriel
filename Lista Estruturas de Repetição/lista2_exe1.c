#include <stdio.h>
#include <stdlib.h>

int main(){
	//Faça um programa que leia um número inteiro positivo N e imprima todos os
    //números naturais de 0 até N em ordem crescente.
    int num;
    scanf("%d", &num);
    for(int i = 0;i<num;i++){
        printf("%d ", i+1);
    }
	return 0;
}

