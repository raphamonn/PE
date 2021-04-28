/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
    h= sqrt(a²+b²)
Faça um programa que leia os valores de a e b (float), calcule e imprima o valor da hipotenusa usando a fórmula dada.*/

#include <stdio.h>
#include<math.h>

int main()
{
   float a,b,c,d, hip;

   printf("\nDigitar um numero: ");
   scanf("%f", &a);

   printf("\nDigitar um numero: ");
   scanf("%f", &b);

   c=a*a;
   d=b*b;

   hip=sqrt(c+d);

   printf("A hipotenusa eh: %f", hip);

}
