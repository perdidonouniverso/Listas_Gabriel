#include <stdio.h>
#include <stdlib.h>

int main(){
    //Escreva um programa que leia certa quantidade de n�meros, imprima o maior deles
    //e quantas vezes o maior n�mero foi lido. A quantidade de n�meros a serem lidos
    //deve ser fornecida pelo usu�rio
    int num, a, e=0, u=0, p, irr=1, y=71, r=1;
    printf("Insira a qtde de numeros a serem lidos:");
    scanf("%d", &num);

    for(int i = num; i>0; i--){
        scanf("%d", &a);
        if(irr==1){
            p=a;

            irr=0;
        }
        if(y==1){
            if(a>p){
                u++;
            }
        }
        if(r == 1){
            y=1;
            r=0;
        }


        if(e <= a){
            e = a;

            if(p==a){
                u++;printf("\n   %d  \n", u);
            }else{
                u = 0;
            }
            p=a;

        }

    }
    printf("%d  ", u);
    return 0;
}
//Professor nao sei resolver isso sem usar ponteiro nao

