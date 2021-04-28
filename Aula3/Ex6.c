/*
Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
"Hn=1+(1/2)+(1/3)+(1/4)+...+(1/n)."
Implemente um algoritmo que calcule o valor de qualquer Hn.
PS: O Hn deve ser arredondado para UMA casa decimal.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a,b;
    float div,c=1;

    scanf("%d", &a);

    for(b=1; b<=a ;b++){
        div=(float)1/b;
        c=c+div;
    }
    
    c=c-1;
    printf("%.1f", c);

}



