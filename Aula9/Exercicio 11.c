#include<stdio.h>
#include<stdlib.h>

/*Implemente uma função que RECEBA como PARÂMETRO DOIS vetores (A e B) e o tamanho N de A e B.
A função deve RETORNAR o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].
*/

int* function(int *vetA, int *vetB, int num);

void main(){
    int num=0, i=0, *vetC=NULL;
    scanf("%d", &num);
    int vetA[num], vetB[num];

    for(i=0;i<num;i++){
        scanf("%d", &vetA[i]);
    }

    for(i=0;i<num;i++){
        scanf("%d", &vetB[i]);
    }

    vetC=function(vetA,vetB,num);

    for(i=0; i<num; i++){
        printf("%d ", vetC[i]);
    }

}

int* function(int *vetA, int *vetB, int num){
    int *p= (int*) malloc (num*sizeof(int));

    for(int i=0; i<num; i++){
        p[i]= vetA[i]+ vetB[i];
    }
    return (p);
}
