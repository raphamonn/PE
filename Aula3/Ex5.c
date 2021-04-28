/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, 
com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a,b,c,d=0 ;
    
    scanf("%d", &a);

    for(c=1; c<a ;c++){
        b=a/c;
        if(a%c==0){
            d= d+c;
        }
    }
    printf("%d \n",d);
}