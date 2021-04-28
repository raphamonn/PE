/*
Faça um programa que leia uma matriz de tamanho 4 × 4.
Calcule e imprima a SOMA dos elementos dessa matriz que estão ABAIXO da DIAGONAL PRINCIPAL.
*/

#include<stdio.h>

void main(){
    int mat[4][4], soma=0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
            if(i!=j && i>0 && j<3 ){
            soma=soma+mat[i][j];
            }
        }
    }
    soma=soma-mat[1][2];
    printf("Soma: %d", soma);
}