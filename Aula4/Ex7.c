/*Faça um programa que receba do usuário DOIS arrays, A e B, com 5 números inteiros cada. 
Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.*/
#include <stdio.h>

void main(){
	int n=5, i=0,vetA[n],vetB[n];	
	for(i=0; i<n; i++){
		scanf("%d", &vetA[i]);	// valores de A
	}
	for(i=0; i<n; i++){
		scanf("%d", &vetB[i]);	//valores de B
	}
	
	int vetC[n];

	for(i=0; i<n ; i++){	
		vetC[i]=vetA[i]-vetB[i]; // posição do vetor C é igual à posição equivalente do vetor A - Vetor B
		printf("%d ", vetC[i]);	
	}
		
}
