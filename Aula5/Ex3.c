/*
Leia uma matriz de tamanho 4 × 4. Em seguida, CONTE e ESCREVA na tela a
quantidade de valores MAIORES do que 10 e também a quantidade de números NEGATIVOS.
*/
#include <stdio.h>

void main() {
    int mat[4][4], negativo=0, maior=0;

    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);

            if(mat[i][j]<0){
                negativo++;
            }

            if(mat[i][j]>10){
                maior++;
            }
        }
    }

    printf("Qtd. > 10: %d \n", maior);
    printf("Qtd. < 0: %d \n", negativo);
}

