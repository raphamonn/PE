#include <stdio.h>

/*Crie um programa que contenha um array de inteiros com CINCO elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e IMPRIMA o DOBRO de cada valor lido.*/

void function(int *pvet){

    for(int i=0; i<5; i++){
        *pvet=*pvet*2;
        pvet++;

    }
}

void main(){
    int vet[5];
    int *p=vet;

    for(int i=0; i<5; i++){
        scanf("%d", &*(p+i));
    }

    function(p);

    for(int i=0; i<5;i++){
        printf("%d ", vet[i]);
    }
}


