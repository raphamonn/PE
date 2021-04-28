/*
Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do 
chamado triângulo de Floyd. Por exemplo, para N=6, o seguinte triângulo é formado:

1
2   3
4   5   6
7   8   9   10
11  12  13  14  15
16  17  18  19  20  21
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a,b,c,d=0;
    
    scanf("%d", &a);
    
    for(b=1; b<=a; b++){
        for(c=1; c<=b;c++){
                d++;
                printf("%d   ", d);
        }
        printf("\n");
    }
}
