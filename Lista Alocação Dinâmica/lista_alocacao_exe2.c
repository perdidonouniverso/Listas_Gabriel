#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fa�a um programa que leia um valor inteiro N n�o negativo. Se o valor de N
    //for inv�lido, o usu�rio dever� digitar outro at� que ele seja v�lido (ou seja, positivo).
    //Em seguida, leia um vetor V contendo N posi��es de inteiros, em que cada valor
    //dever� ser maior ou igual a 2. Esse vetor dever� ser alocado dinamicamente.

    int num;

    do{
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }while(num <= 0);

    int *v;
    v = (int*) malloc(num * sizeof(int));
    if(v == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }
    int num1;

    for(int i = 0; i < num; i++){
        do{
            scanf("%d", &num1);
        }while(num1 < 2);
        v[i] = num1;
    }

    for(int i = 0; i < num; i++){
        printf("%d ", v[i]);
    }


    return 0;
}
