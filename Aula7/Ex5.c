#include <stdio.h>

/*Implemente um algoritmo que contenha uma função que permita passar por parâmetro DOIS números inteiros A e B, lidos pelo TECLADO.
A função deverá calcular a SOMA entre estes DOIS números e armazenar o resultado na variável A. Esta função NÃO deverá possuir retorno,
mas deverá MODIFICAR o valor do PRIMEIRO PARÂMETRO. Imprima os valores de A e B na função main().
*/

int main(){
   int A,B,aux;

   scanf("%d%d", &A,&B);
   aux=function(&A,&B);
   printf("%d\n%d", A,B);
}

int function(int *PA, int *PB){
    *PA=*PA+*PB;
}
