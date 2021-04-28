#include <stdio.h>

/*Crie uma enumeração representando os dias da semana.
Agora, escreva um programa que leia um valor inteiro do teclado e exiba o dia da semana correspondente. */

enum{Domingo,Segunda,Terca,Quarta,Quinta,Sexta,Sabado};


void main(){
   int num;

   scanf("%d", &num);

   switch(num){
      case Domingo:
      printf("Domingo");
      break;

      case Segunda:
      printf("Segunda");
      break;
      
      case Terca:
      printf("Terca");
      break;

      case Quarta:
      printf("Quarta");
      break;

      case Quinta:
      printf("Quinta");
      break;

      case Sexta:
      printf("Sexta");
      break;

      case Sabado:
      printf("Sabado");
      break;
   }
}