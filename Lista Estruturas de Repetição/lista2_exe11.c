#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
    //os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66
    int num;
    scanf("%d", &num);
    for(int i = num; i>0; i--){
        if(num%i == 0){
            printf("%d ", i);
        }

    }
    return 0;
}

