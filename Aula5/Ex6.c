
/*
Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números INTEIROS.
Em seguida, calcule um VETOR contendo TRÊS posições, em que cada posição deverá armazenar a SOMA dos números de cada COLUNA da matriz.
Exiba na tela esse array. Por exemplo, a matriz  
*/

#include <stdio.h>
void main(){
    int mat[3][3], vet[3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    vet[0]=mat[0][0] + mat[1][0] + mat[2][0];
    vet[1]=mat[0][1] + mat[1][1] + mat[2][1];
    vet[2]=mat[0][2] + mat[1][2] + mat[2][2];

    for(int i=0; i<3; i++){
        printf("%d ", vet[i]);
    }
}

