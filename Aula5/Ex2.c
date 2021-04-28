/*
implemente um algoritmo que declare uma matriz de tamanho linha × coluna, sendo linha = coluna e devem ser DEFINIDAS pelo USUÁRIO.
Preencha com 1 a DIAGONAL PRINCIPAL e com 0 os DEMAIS ELEMENTOS. Ao final, ESCREVA a matriz obtida na tela. 
*/
#include <stdio.h>
void main() {
    int num;
    scanf("%d", &num);
    int mat[num][num];

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(i==j){
                mat[i][j]=1;
                }
            else{
                mat[i][j]=0;
            }
        }
    } 
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}



