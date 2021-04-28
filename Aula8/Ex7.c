#include <stdio.h>

/*Implemente uma função que receba como parâmetro um array de números do tipo float de tamanho N e RETORNE quantos números NEGATIVOS há nesse array. Essa função deve obedecer ao protótipo:

int funcao(float *vet, int N);

Ps: Os DADOS DE ENTRADA do algoritmos são o tamanho N e os elementos do array.*/


void main(){
    int n;
    scanf("%d", &n);
    float vet[n];
    float *p=vet;

    for(int i=0; i<n; i++){
        scanf("%f", &vet[i]);
    }
    function(p,n);
}

int function(float *vet, int n){
    int qtd=0;
    for(int i=0; i<n; i++){
        if(*vet<0){
           qtd++;
        }
    vet++;
    }
    printf("%d", qtd);
}
