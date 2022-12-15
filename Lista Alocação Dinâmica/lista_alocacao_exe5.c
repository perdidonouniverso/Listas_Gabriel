#include <stdio.h>
#include <stdlib.h>


int aloca_memoria(int num){
    return (int*) malloc((num*num) * sizeof(int));

}

int main(){
    //Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
    //para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz
    //deve conter o valor 1 na diagonal principal e 0 nas demais posições.



    int num;
    printf("Digite quantas posicoes de vetor de inteiro precisa:\n");
    scanf("%d", &num);

    if(aloca_memoria(num) == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }

    int *p;
    p = aloca_memoria(num);


    //Esta com um pequeno problema de colocar na ultima linha da matriz os numeros 1
    //nao consegui resolver
    for(int i = 0; i<num; i++){
        for(int x = 0; x<num; x++){
            if(i==x){
                p[i] = 1;
            }else{
                p[i] = 0;
            }
        }
    }
    for(int i = 0; i<num; i++){
        for(int x = 0; x<num; x++){
            printf("%d \t " ,p[i]);
            if(x == num-1){
                printf("\n");
            }
        }
    }


    return 0;
}
