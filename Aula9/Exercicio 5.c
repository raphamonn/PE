#include <stdio.h>
#include <stdlib.h>

/*Fa�a uma fun��o que RETORNE o PONTEIRO para um vetor de N elementos inteiros alocados dinamicamente.
DICA!!

Segue um exemplo de pseudoc�digo que retorna um ponteiro. A ideia � simples:

void main(){
    int *retP=NULL;
    retP = funcao();
}

int* funcao(){
    int *p=NULL;
    p=(int*) malloc(qtd*sizeof(int));
    return p;
}
*/

int *function (int qtd);

int main(){
    int *retP=NULL;
    int qtd;
    scanf("%d", &qtd);
    retP=function(qtd);

    for(int i=0; i<qtd; i++){
        printf("%d ", retP[i]);
    }
    free(retP);
    retP = NULL;
    printf("\n");
}


int *function (int qtd){
    int *p=NULL;
    p = (int *) malloc (qtd * sizeof(int));
    for (int i=0; i<qtd; i++){
        scanf("%d", &p[i]);
    }
    return(p);
}
