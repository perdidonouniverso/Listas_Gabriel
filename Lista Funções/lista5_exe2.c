#include <stdio.h>
#include <stdlib.h>

double funcao(double temp){
    return (temp - 32) * (5/9);

}

void main(){
    //Escreva uma fun��o que receba por par�metro uma temperatura em graus
    //Fahrenheit e a retorne convertida em graus Celsius. A f�rmula de convers�o �: C =
    //(F � 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em
    //Celsius.

    //Nao sei porque nao funciona
    float num;
    scanf("%f", &num);
    printf("%f", funcao(num));
}
