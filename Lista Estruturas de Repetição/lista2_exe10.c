#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima
    //sua média.
    int a, e;
    for(int i = 0; i<10; i++){
        scanf("%d", &a);
        e = e +a;

    }
    system("cls");
    printf("Media: %d", (e/10));
    return 0;
}
