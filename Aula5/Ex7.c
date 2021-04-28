/*
Faça um programa que leia uma matriz de tamanho 3 × 3.
Calcule e imprima a SOMA dos elementos dessa matriz que estão ACIMA da DIAGONAL PRINCIPAL.  
*/
#include <stdio.h>

void main(){
    int mat[3][3], soma=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
            if(i!=j && i<=1 && j>0){
                soma=soma+mat[i][j];
            }
        }
    }
    printf("Soma: %d\n", soma);
}


