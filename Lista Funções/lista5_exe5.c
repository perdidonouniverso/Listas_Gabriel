#include <stdio.h>
#include <stdlib.h>

int main(){
    //Elabore uma fun��o que receba como par�metro um valor inteiro n e gere como
    //sa�da n linhas com pontos de exclama��o, conforme o exemplo a seguir, em que
    //usamos n = 5:

    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("\n");

    for(int t = num; t > 0; t--){
        for(int i = t; i > 0; i--){
            printf("!");
        }
        printf("\n");
    }

    return 0;
}
