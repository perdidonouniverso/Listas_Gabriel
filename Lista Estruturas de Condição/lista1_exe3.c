#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
    //�mpar.
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
