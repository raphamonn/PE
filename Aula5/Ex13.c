/*
Crie uma função recursiva que retorne a SOMA dos elementos de um vetor de inteiros com 4 elementos.
*/
#include <stdio.h>
#include <string.h>

int somar(int *vet, int aux){
    int soma=0;
    if(aux<4){
        soma=soma+vet[aux]+somar(vet, aux+1);
    }
    return soma;
}

void main(){
    int vet[4], aux=0;

    for(int i=0; i<4; i++){
        scanf("%d", &vet[i]);
    }
    printf("%d", somar(vet,aux));
}
