/*
Implemente um algoritmo que leia do teclado SEIS valores inteiros e em seguida mostre na tela os valores lidos na ORDEM INVERSA.
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int num[6];
	
	for(int i=0; i<=5; i++){
		scanf("%d", &num[i]);		
	}
	for(int i=5; i>=0 ; i--){
		printf("%d ", num[i]);
	} 
}

