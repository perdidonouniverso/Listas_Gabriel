#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
    //terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

    for(int i = 10; i>=0;i--){
        printf("%d ", i);
        if(i == 0){
            printf("fim");
        }
    }
	return 0;
}
