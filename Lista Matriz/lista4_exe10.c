int main(){
    //Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e
    //imprima a matriz B, sendo que B = A2.


    int A[5][5];
    int B[5][5];

    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            scanf("%d", &A[i][x]);
        }
    }
    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            B[i][x] = A[i][x] *A[i][x];
        }
    }
    for(int i = 0; i<5; i++){
        for(int x = 0; x<5; x++){
            printf("%d\t", B[i][x]);
            if(x==4){
                printf("\n");
            }
        }

    }




    return 0;
}
