/*
A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2).
Crie uma função recursiva que calcule a multiplicação por somas sucessivas de DOIS inteiros.
*/
#include <stdio.h>

int somar(int x,int y,int aux){
    int soma=0;
    if(aux<y){
        soma=soma+x+somar(x,y,aux+1);
    }
    return soma;
}
void main(){
    int x,y,aux=0,r;

    scanf("%d",&x);
    scanf("%d",&y);

    r=somar(x,y,aux);
    printf("%d",r);
}
