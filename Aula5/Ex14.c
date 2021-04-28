/* 
Escreva uma função recursiva que receba por parâmetro DOIS valores inteiros x e y 
e calcule e retorne o resultado de xy para o programa principal.
*/
#include <stdio.h>

int pot(int base, int exp, int aux){
    int result=1;

    if(aux<exp){
        result= result*base*pot(base,exp,aux+1);
    }
    return result;
}

void main(){
    int base,exp,aux=0,result;
    scanf("%d",&base);
    scanf("%d",&exp);
    result=pot(base,exp,aux);
    printf("%d", result);
}


