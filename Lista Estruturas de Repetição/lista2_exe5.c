#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.

    int num;
    int a=0;
    for(int i = 0; i<=100;i++){
        if(i%2 == 0){
            a = a + i;
        }


    }
    printf("%d", a);
	return 0;
}
