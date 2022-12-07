#include <stdio.h>
#include <stdlib.h>

int main(){
    //Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
    //valor lido.

    int a, r=0, e, t, ro;

    for(int i = 0; i<10;i++){
        scanf("%d", &a);
        if(a > r){
            e=a;//e maior
        }
        r = a;
        if(a < t){
            ro=a;//ro menor
        }
        t = a;
    }
    printf("monor: %d\nmaior: %d", ro, e);
	return 0;
}
