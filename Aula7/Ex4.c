#include <stdio.h>
/*
Faça um programa que leia, pelo TECLADO, DOIS valores INTEIROS e chame uma função que receba estes DOIS valores de ENTRADA e
RETORNE o MAIOR valor na PRIMEIRA VARIÁVEL e o MENOR valor na SEGUNDA VARIÁVEL. Imprima, através da função main(), o conteúdo das DUAS VARIÁVEIS na tela.
*/
void main(){
    int A,B,aux;

    scanf("%d%d", &A,&B);

    aux = function(&A,&B);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
}

int function(int *PA, int *PB){
    int aux=0;

    if(*PA<*PB){
    aux=*PA;
    *PA=*PB;
    *PB=aux;
    }
    return aux;
}


