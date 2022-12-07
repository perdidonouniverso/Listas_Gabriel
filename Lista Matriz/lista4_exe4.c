#include <stdio.h>
#include <stdlib.h>

int main(){
    //Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
    //valores maiores do que 10 ela possui.


    int mat[4][4];
    int contador;

    for(int i = 0; i<4; i++){
        for(int x = 0; x<4; x++){
            scanf("%d", &mat[i][x]);
            if(mat[i][x] > 10){
                contador++;
            }
        }
    }
    printf("\nQtde de numeros maiores de 10: %d", contador);



    return 0;
}
