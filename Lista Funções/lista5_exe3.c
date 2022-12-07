#include <stdio.h>
#include <stdlib.h>

int funcao(int hora, int minutos, int segundos){
    return ((hora*60)*60) + (minutos * 60) + segundos;

}

void main(){
    //Elabore uma função que receba três números inteiros como parâmetro,
    //representando horas, minutos e segundos. A função deve retornar esse horário
    //convertido em segundos.
    int hora, minutos, segundos;

    printf("Insira quantas horas:\n");
    scanf("%d", &hora);

    printf("\nInsira quantas minutos:\n");
    scanf("%d", &minutos);

    printf("\nInsira quantas segundos:\n");
    scanf("%d\n", &segundos);

    printf("Segundos: %d", funcao(hora, minutos, segundos));
}
