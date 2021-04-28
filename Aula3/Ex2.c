

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ÍMPARES e PARES.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  int a,b=1,c;

  printf("Digite um numero: \n");
  scanf("%d", &a);

  while(b<=a){
      printf("%d \n",b);
      b=b+2;
    }
    printf("\n");
    b=0;

  while(b<=a){
      printf("%d \n",b);
      b=b+2;
    }
}

