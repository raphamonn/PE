/* 
Faça um programa que preencha um vetor com 5 números reais. Em seguida, calcule e mostre na tela a 
QUANTIDADE de números negativos e a SOMA dos números positivos desse vetor.
*/
#include <stdio.h>

int negativo (float *vet, int n){
    int cont=0;
    for(int i=0; i<n; i++){
        if(vet[i]<0){
            cont++;
        }
    }
    printf("%d\n", cont);
}

void main() {
    int n=5;
    float vet[n], soma=0;
    
    for(int i=0; i<n; i++){
    	scanf("%f", &vet[i]);
		if(vet[i]>0)
		    soma=soma+vet[i];	
    }
    negativo(vet, n); /*função que conta os negativos */
    printf("%f", soma);  
}

