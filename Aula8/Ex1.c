#include <stdio.h>

/*Crie uma fun��o que receba como par�metro um VETOR de INTEIROS com TAMANHO CINCO e o imprima.
N�O utilize �ndices para percorrer o vetor, apenas ARITM�TICA DE PONTEIROS.*/

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


