#include <stdio.h>
#include <stdlib.h>

int main(){
    //Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
    //possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
    //usuário entre com o valor e o estado de destino do produto e o programa retorne o
    //preço final do produto acrescido do imposto do estado em que ele será vendido. Se
    //o estado digitado não for válido, mostrará uma mensagem de erro.
    //Estado MG SP RJ MS
    //Imposto 7% 12% 15% 8%
    float num;
    char estado[2];

    printf("Escolha um estado:\n");
    scanf("%d", &estado);
    printf("Digite o preco:\n");
    scanf("%f", &num);
    if(estado[0] == "M" && estado[1] == "G"){
        printf("%.2f", (num = num + num*0,07));
    }
    if(estado[0] == "S" && estado[1] == "P"){
        printf("%.2f", (num = num + num*0,12));
    }
    if(estado[0] == "R" && estado[1] == "J"){
        printf("%.2f", (num = num + num*0,15));
    }
    if(estado[0] == "M" && estado[1] == "S"){
        printf("%.2f", (num = num + num*0,08));
    }


    return 0;
}
