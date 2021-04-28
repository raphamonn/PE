#include <stdio.h>

/*Escreva um programa que declare uma MATRIZ de inteiros (3 x 3) e um ponteiro para inteiros. ASSOCIE o PONTEIRO a MATRIZ.
Agora, SOME mais um (+1) a cada posição da MATRIZ usando o ponteiro. Utilize aritmética de ponteiros para resolver o problema.*/

void main(){
    int mat[3][3];
    int *p=mat;

    for(int i=0; i<9;i++){
        scanf("%d", &*p+i);
    }
    function(p);
    for (int i=0;i<9;i++){
        printf("%d",*(p+i));

    }
}
void function(int *mat){
    for (int i=0;i<9;i++){
       *mat=*mat+1;

        mat++;
    }
}
