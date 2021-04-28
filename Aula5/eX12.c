/*
Crie uma função recursiva que IMPRIMA todos os números naturais de 0 até N em ordem CRESCENTE.
*/
#include<stdio.h>
void print(int n, int aux){
    printf("%d ", aux);
    if(aux<n){
        return print(n, aux+1);
    }
}

void main(){
   int n, aux=0;
   scanf("%d", &n);
   print(n, aux);
}
