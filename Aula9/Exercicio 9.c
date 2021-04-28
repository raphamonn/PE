#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que RECEBA como parâmetro um valor N e RETORNE o PONTEIRO para uma matriz alocada dinamicamente contendo N linhas e N colunas.
Essa matriz deve conter o valor 1 na DIAGONAL PRINCIPAL e 0 nas DEMAIS POSIÇÕES. Por fim, a matriz deve ser impressa no main(). */

int *matriz(int size);

void main(){
    int size=0;
    int *retP=NULL;
    scanf("%d", &size);

    retP=matriz(size);

    for(int i=0;i<size;i++){
        for(int j=0; j<size; j++){
            printf("%d ", retP[i*size+j]);
        }
        printf("\n");
    }
    free(retP);
    retP=NULL;
    printf("\n");
}

int* matriz(int size){

    int *p= (int*) malloc (size * size * sizeof(int));

    for(int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(i==j){
                p[i*size+j]=1;
            }
            else{
                p[i*size+j]=0;
            }
        }
    }

    return(p);
}
