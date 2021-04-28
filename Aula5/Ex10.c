/*
Escreva uma função recursiva que calcule a SOMA dos primeiros n cubos:

S = 1^3 + 2^3 + ... + n^3 
*/
#include<stdio.h>
#include<math.h>

int cubo(int num){
   int cube, resultado;
   cube=num;

   if(num==0){
      return 0;
   }
   else{
      cube=num*num*num;
      resultado= cube + cubo(num-1);
   }
}

void main(){
   int n=0, res=0;
   
   scanf("%d", &n);
   res=cubo(n);
   printf("%d", res);
}
