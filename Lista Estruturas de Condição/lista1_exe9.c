#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de
    //opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe
    //uma das op��es, &e o seu programa pede dois valores num�ricos e realiza a
    //opera��o, mostrando o resultado.
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
