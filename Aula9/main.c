#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que mostre o TAMANHO em byte que cada tipo de dados ocupa na memória: char, int, float, double.*/

void main(){
    int a,b,c,d;

    a=sizeof(char);
    b=sizeof(int);
    c=sizeof(float);
    d=sizeof(double);

    printf("Char: %d\n", a);
    printf("Int: %d\n", b);
    printf("Float: %d\n",c);
    printf("Double: %d\n", d);
}
