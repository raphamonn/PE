/*Elabore um programa que solicite, na seguinte ordem, ao usuário entrar com o valor do dia, 
mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (/).*/

#include <stdio.h>

void main()
{
  int dia, mes, ano;

  printf("dia: ");
  scanf("%d", &dia);

  printf("mes:");
  scanf("%d", &mes);

  printf("ano:");
  scanf("%d", &ano);

  printf( "%d/", dia);
  printf("%d/", mes);
  printf("%d", ano);
}