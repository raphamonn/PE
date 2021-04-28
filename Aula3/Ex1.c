/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem CRESCENTE e DECRESCENTE.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a,b=0,c;

  printf("Digite um numero: \n");
  scanf("%d",&a);
  c=a;


  while (b<=a){
    printf("%d \n",b);
    b=b+1;
  }
  printf("\n");
  b=0;

  while (b<=a){
    printf("%d \n", c);
    c=c-1;
    b=b+1;
  }
}
