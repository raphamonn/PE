#include <stdio.h>

/*Implemente uma fun��o que receba como par�metro um array de n�meros do tipo float de tamanho N e RETORNE quantos n�meros NEGATIVOS h� nesse array. Essa fun��o deve obedecer ao prot�tipo:

int funcao(float *vet, int N);

Ps: Os DADOS DE ENTRADA do algoritmos s�o o tamanho N e os elementos do array.*/


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
