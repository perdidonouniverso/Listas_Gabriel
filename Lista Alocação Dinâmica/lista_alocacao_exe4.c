#include <stdio.h>
#include <stdlib.h>

int aloca_memoria(int num){
    return (int*) malloc(num * sizeof(int));

}

int main(){
    //Escreva uma fun��o que receba um valor inteiro positivo N por par�metro e retorne
    //o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo
    //ou igual a zero, um ponteiro nulo dever� ser retornado.


    int *p;
    int num;
    printf("Digite quantas posicoes de vetor de inteiro precisa:\n");
    scanf("%d", &num);

    //Se cair no if esta nulo, e quando o numero � negativo ele vai nulo
    if(aloca_memoria(num) == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }

    p = aloca_memoria(num);




    return 0;
}
