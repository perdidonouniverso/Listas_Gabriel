#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros
    //n�meros naturais �mpares.

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
