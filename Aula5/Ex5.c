/*
Calcular e imprimir na tela uma matriz de tamanho LINHA × COLUNA, em que seus elementos são da forma:
a) A[i][j] = 2i + 7j – 2 se i < j;
b) A[i][j] = 3i2 – 1 se i = j;
c) A[i][j] = 4i3 + 5j2 + 1 se i > j.
*/
#include <stdio.h>
#include <math.h>

void main() {
    int inum, jnum, result=0, resultdois=0;

    scanf("%d", &inum);
    scanf("%d", &jnum);

    int mat[inum][jnum];

    for(int i=0; i<inum; i++){
        for(int j=0; j<jnum; j++){
            result=0;
            resultdois=0;

            if(i<j){
                mat[i][j]= 2*i+7*j-2;
            }
            if(i==j){
                result= pow(i,2);
                mat[i][j]= 3*result-1;
            }
            if(i>j){
                result= pow(i,3);
                resultdois= pow(j,2);
                mat[i][j]= 4*result+5*resultdois+1;
            }
        }
    }

    for(int i=0; i<inum; i++){
        for(int j=0; j<jnum; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

}
