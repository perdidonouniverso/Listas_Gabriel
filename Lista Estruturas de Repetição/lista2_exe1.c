#include <stdio.h>
#include <stdlib.h>

int main(){
	//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
    //n�meros naturais de 0 at� N em ordem crescente.
    int num;
    scanf("%d", &num);
    for(int i = 0;i<num;i++){
        printf("%d ", i+1);
    }
	return 0;
}

