#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que aloque dinamicamente uma MATRIZ de inteiros. As dimensões da matriz deverão ser lidas do USUÁRIO, via teclado.
Em seguida, escreva uma função que receba um valor e RETORNE 1, caso o valor esteja na matriz, ou RETORNE 0, no caso contrário. */

int function(int *p, int aux, int num);

void main(){
    int tam[2], num=0;
    scanf("%d%d%d", &tam[0],&tam[1],&num);
    int*p=NULL;
    int aux=tam[0]*tam[1];

    // tam[0] linha e tam[1] coluna
    p= (int *) malloc(tam[0]*tam[1]*sizeof(int));


    // preenchimento da matriz
    for(int i=0; i< tam[0]; i++){
        for(int j=0; j<tam[1]; j++){
            scanf("%d", &p[i*tam[1]+j]);
        }
    }
    printf("%d", function(p,aux,num));

    free(p);
    p = NULL;
    printf("\n");
}
int function(int *p, int aux, int num){
    for(int i=0; i< aux; i++)
            if(p[i]==num)
                return 1;

    return 0;
}
