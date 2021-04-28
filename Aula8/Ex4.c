#include<stdio.h>

/*Implemente uma função que receba DOIS parâmetros: um vetor de caracteres (tamanho 5) e um valor do mesmo tipo do vetor.
A função deverá preencher os elementos do vetor com esse valor.
NÃO utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void function(char *pvet, char *pletra){
    for(int i=0; i<5; i++){
        *pvet=*pletra;
        pvet++;
    }
}

void main(){
    char vet[6];
    char letra;
    char *p1,*p2;

    p1=vet;
    p2=&letra;

    for(int i=0; i<5; i++){
        scanf(" %c", &*p1+i);
    }
    scanf(" %c", &*p2);

    function(p1,p2);

    printf("%s", vet);

}


