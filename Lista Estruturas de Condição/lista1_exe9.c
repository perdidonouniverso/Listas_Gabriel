#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que mostre ao usuário um menu com quatro opções de
    //operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
    //uma das opções, &e o seu programa pede dois valores numéricos e realiza a
    //operação, mostrando o resultado.
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    system("cls");
    printf("Escolha:\n1 +\n2 -\n3 *\n4 /\n");
    int escolha;
    scanf("%d", &escolha);
    if(escolha == 1){
        return num1 + num2;
    }
    else if(escolha == 2){
        return num1 - num2;
    }
    else if(escolha == 3){
        return num1 * num2;
    }
    else if(escolha == 4){
        return num1 / num2;
    }


    return 0;
}
