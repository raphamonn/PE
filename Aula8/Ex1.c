#include <stdio.h>

/*Crie uma função que receba como parâmetro um VETOR de INTEIROS com TAMANHO CINCO e o imprima.
NÃO utilize índices para percorrer o vetor, apenas ARITMÉTICA DE PONTEIROS.*/

void function(int *pvet){

    for(int i=0; i<5; i++){
    scanf("%d", &(*pvet));
    pvet++;
    }
}

void main(){
    int vet[5];
    int *p= NULL;

    p=vet;
    function(p);

    for(int i=0; i<5; i++){
        printf("%d ",*p);
        p++;
    }
}


