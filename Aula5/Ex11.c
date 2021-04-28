/*
Crie uma função recursiva que receba um número inteiro N e retorne o SOMATÓRIOS dos números de 1 a N.
*/
#include<stdio.h>

int soma(int n){
    int res;

    if(n<0){
        n=n*-1;
    }
    if(n==0){
        return 0;
    }
    else{
        res=n+soma(n-1);
    }
}

void main(){
  int n, res;

  scanf("%d", &n);
  res = soma(n);
  printf("%d", res);
}