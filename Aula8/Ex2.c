#include <stdio.h>

/*Crie um programa que contenha um array com CINCO ELEMENTOS INTEIROS.
Leia esse array do teclado e IMPRIMA os VALORES PARES.*/

void main(){
    int vet[5];
    int *p=vet;

    for(int i=0; i<5; i++){
        scanf("%d",&*p+i);
    }
    for(int i=0; i<5; i++){
        if(vet[i]%2==0){
            printf("%d ", vet[i]);
        }
    }

}
