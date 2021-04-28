#include <stdio.h>

/*
Escreva um programa que leia o número de alunos e de alunas de uma sala. Como saída, o programa deve apresentar o número de alunos, de alunas e o total de alunos na sala. 

Por exemplo, para as seguintes ENTRADAS:  

10
6

O algoritmo deve imprimir (SAÍDAS):

Alunos: 10
Alunas: 6
Total: 16
*/


void main()
{
   int h, m, s;

   printf("Digite a quantidade de alunos: \n");
   scanf("%d", &h);

   printf("Digite a quantidade de alunas: \n");
   scanf("%d", &m);

   s=h+m;

   printf("Alunos: %d \n",h);
   printf("Alunas: %d\n",m);
   printf("Total: %d \n",s);
}
