#include<stdio.h>

/*Implemente uma fun��o que receba DOIS par�metros: um vetor de caracteres (tamanho 5) e um valor do mesmo tipo do vetor.
A fun��o dever� preencher os elementos do vetor com esse valor.
N�O utilize �ndices para percorrer o vetor, apenas aritm�tica de ponteiros.*/

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


