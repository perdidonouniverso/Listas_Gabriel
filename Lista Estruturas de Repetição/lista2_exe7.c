#include <stdio.h>
#include <stdlib.h>

int main(){
    //Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
    //valores e apresente o resultado na tela.
    int a, r;

    for(int i = 0; i<10;i++){
        scanf("%d", &a);
        r = r+a;
        if(i == 10){
            printf("fim");
        }
    }
    printf("%d", r);
	return 0;
}
