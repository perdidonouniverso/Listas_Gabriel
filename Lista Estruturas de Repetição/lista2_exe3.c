#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um número inteiro N e depois imprima os N primeiros
    //números naturais ímpares.

    int num;
    scanf("%d", &num);
    for(int i = 0; i<num;i++){
        if(i%2==0){

        }
        else{
            printf("%d ", i);
        }
    }
	return 0;
}
