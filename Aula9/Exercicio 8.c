#include<stdio.h>
#include<stdlib.h>

/*Escreva uma fun��o que RECEBA um valor inteiro positivo N por PAR�METRO e RETORNE o ponteiro para um vetor de tamanho N alocado dinamicamente.
Esse vetor dever� ter os seus elementos preenchidos com CERTO VALOR, tamb�m PASSADO por par�metro. Se CERTO VALOR  for NEGATIVO ou IGUAL A ZERO,
um ponteiro NULO dever� ser RETORNADO e IMPRESSO no main(). Entretanto, se CERTO VALOR >0, o elemento passado como par�metro deve ser INSERIDO no
VETOR alocado dinamicamente que tamb�m deve ser IMPRESSO no main().   */

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


