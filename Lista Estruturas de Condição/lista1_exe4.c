#include <stdio.h>
#include <stdlib.h>

int main(){
    //Faça um programa que leia o salário de um trabalhador e o valor da prestação de
    //um empréstimo. Se a prestação:
    //● For maior que 20% do salário, imprima: “Empréstimo não concedido.”
    //● Caso contrário, imprima: “Empréstimo concedido.”
    float salario, parcela_emprestimo;
    printf("Informe o seu salario\n");
    scanf("%f", &salario);
    printf("Informe a parcela do seu emprestimo\n");
    scanf("%f", &parcela_emprestimo);
    system("cls");
    if(salario*0,2 < parcela_emprestimo){
        printf("Emprestimo nao sucedido\n");
    }else{
        printf("Emprestimo sucedido\n");
    }

	return 0;
}
