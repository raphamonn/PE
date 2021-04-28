/*
Faça um programa que leia uma matriz de tamanho 4 × 4.
Calcule e imprima a SOMA dos elementos dessa matriz que NÃO pertencem à DIAGONAL PRINCIPAL nem à DIAGONAL SECUNDÁRIA.
*/
#include<stdio.h>

void main(){
    int mat[4][4], soma=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &mat[i][j]);

            if(j>0 && j<3 && i==0){
                soma=soma+mat[i][j];
            }

            if(j>0 && j<3 && i==3){
                soma=soma+mat[i][j];
            }

            if(i>0 && i<3 && j==0){
                soma=soma+mat[i][j];
            }

            if(i>0 && i<3 && j==3){
                soma=soma+mat[i][j];
            }

        }
    }
    printf("Soma: %d", soma);
}
