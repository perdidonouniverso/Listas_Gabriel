#include <stdio.h>
#include <stdlib.h>

double funcao(double temp){
    return (temp - 32) * (5/9);

}

void main(){
    //Escreva uma função que receba por parâmetro uma temperatura em graus
    //Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C =
    //(F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em
    //Celsius.

    //Nao sei porque nao funciona
    float num;
    scanf("%f", &num);
    printf("%f", funcao(num));
}
