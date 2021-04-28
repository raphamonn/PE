#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que RECEBA um valor inteiro positivo N por PARÂMETRO e RETORNE o ponteiro para um vetor de tamanho N alocado dinamicamente.
Esse vetor deverá ter os seus elementos preenchidos com CERTO VALOR, também PASSADO por parâmetro. Se CERTO VALOR  for NEGATIVO ou IGUAL A ZERO,
um ponteiro NULO deverá ser RETORNADO e IMPRESSO no main(). Entretanto, se CERTO VALOR >0, o elemento passado como parâmetro deve ser INSERIDO no
VETOR alocado dinamicamente que também deve ser IMPRESSO no main().   */

int *function(int N, int num);

void main(){
    int *retP=NULL,N,num;
    scanf("%d%d",&N,&num);

    retP=function(N,num);

    if(retP==NULL){
        printf("NULL");
    }
    else{
        for(int i=0;i<N;i++){
            printf("%d ", retP[i]);
        }
    }
    free(retP);
    retP = NULL;
    printf("\n");
}

int *function(int N, int num){
    int *p=NULL;

    if(num<=0){
        return(p);
    }
    else{
        p = (int *) malloc (N*sizeof(int));

        for(int i=0; i<N; i++){
            p[i]= num;
        }
        return (p);

    }
}


