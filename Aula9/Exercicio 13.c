#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que RECEBA como parâmetro uma MATRIZ A com 3 linhas e 3 colunas e um VETOR B também com tamanho 3.
A função deve RETORNAR o  ponteiro para um vetor C de tamanho 3 alocado dinamicamente, em que C é o produto da matriz A pelo vetor B.
Um detalhe, o C deve ser impresso no main().

    |1 2 3|
EX: |4 5 6| x (1,2,3) =   (1*1 + 2*2 + 3*3, 4*1 + 5*2 + 6*3, 7*1 + 8*2 + 9*3)  Ou seja, (14,32,50)
    |7 8 9|

*/

int* function(int *vet, int mat[][3]);

void main(){
    int matA[3][3], vetA[3],i;
    int *vet=NULL;


    for(i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    for (i=0; i<3; i++){
        scanf("%d", &vetA[i]);
    }
    vet=function(vetA, matA);

    for(i=0; i<3; i++){
        printf("%d ", vet[i]);
    }
}

int* function(int *vet, int mat[][3]){
    int *p= (int *) malloc (3*sizeof(int));

    for (int i=0; i<3; i++){
        p[i]=0;
        for (int j=0; j<3; j++){
            p[i]=p[i]+ vet[j] * mat[i][j];

        }
    }
    return(p);
}
