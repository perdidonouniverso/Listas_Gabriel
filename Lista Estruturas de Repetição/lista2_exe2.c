#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
    //n�meros naturais de 0 at� N em ordem decrescente.
    int num;
    scanf("%d", &num);
    for(int i = num; i>=0;i--){
        printf("%d ", i);
    }
	return 0;
}
