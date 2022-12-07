#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia um número inteiro e verifique se esse número é par ou
    //ímpar.
    int num;
    printf("Informe o numero\n");
    scanf("%d", &num);

    system("cls");

    if(num%2 == 0){
        printf("E par\n");
    }else{
        printf("E impar\n");
    }

	return 0;
}
