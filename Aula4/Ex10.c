/*
LEIA um vetor com 10 números de ponto flutuante. 
Em seguida, ORDENE os elementos desse vetor e IMPRIMA o vetor na tela.
*/
#include <stdio.h>

void main(){
	float vet[10], aux, temp;
    scanf("%f", vet);

	for(int i=1; i<10; i++){
		scanf("%f", &aux);
		for(int j=0; j<i; j++){
			if(aux<vet[j]){
				temp=vet[j];
				vet[j]=aux;
				aux=temp;	
			}
        }
	    vet[i]=aux;	
	}
	for(int i=0; i<10; i++){
	    printf("%f\n", vet[i]);	
	}	
}


