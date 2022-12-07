#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que informe o mês de acordo com o número digitado pelo
    //usuário. Exemplo: Entrada = 4. Saída = Abril.
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("janeiro");
        break;
        case 2:
            printf("feveiro");
        break;

        case 3:
            printf("marco");
        break;

        case 4:
            printf("abril");
        break;

        case 5:
            printf("maio");
        break;
        case 6:
            printf("junho");
        break;
        case 7:
            printf("julho");
        break;
        case 8:
            printf("agosto");
        break;
        case 9:
            printf("setembro");
        break;
        case 10:
            printf("outubro");
        break;
        case 11:
            printf("novembro");
        break;
        case 12:
            printf("dezembro");
        break;


    }

    return 0;
}
