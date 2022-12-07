#include <stdio.h>
#include <stdlib.h>

int main(){
    //Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
    //imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
    //segunda-feira, se 2, e assim por diante.
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("domingo");
        break;
        case 2:
            printf("segunda");
        break;
        case 3:
            printf("terca");
        break;
        case 4:
            printf("quarta");
        break;
        case 5:
            printf("quinta");
        break;
        case 6:
            printf("sexta");
        break;
        case 7:
            printf("sabado");
        break;


    }

    return 0;
}
