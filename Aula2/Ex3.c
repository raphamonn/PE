/*Implemente um algoritmo para ler o número de alunas e alunos matriculados na disciplina de Programação Estruturada.
 A estrutura de seleção é utilizada para verificar se a sala de aula possui a MESMA quantidade de alunos e alunas OU 
 se possui MAIS alunas do que alunos OU se possui MAIS alunos do que alunas. Caso uma dessas verificações seja VERDADEIRA, 
 o algoritmo deve escrever uma mensagem específica. 
*/

#include <stdio.h>


void main()
{
  int h,m;

  printf("digite a quantidade de alunacs: ");
  scanf("%d", &m);

  printf("digite a quantidade de alunos: ");
  scanf("%d", &h);

  if(h==m){
    printf("Mesma quantidade!");
  }
    else if(h>m){

    printf("Quantidade de alunos eh maior do que de alunas!");
    }
    else if(m>h){
    printf("Quantidade de alunas eh maior do que de alunos!");
    }
}