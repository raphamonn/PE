/*
Implemente um algoritmo que LEIA cinco valores e os armazene em um VETOR. 
Em seguida, mostre todos os valores lidos juntamente com a média dos valores.
Ps: A média deve ser mostrada usando DUAS casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor[5], media=0, controle=0;
	int i=0;
	
	for(i=0; i<5; i++){
		scanf("%f", &valor[i]);
		controle=controle+valor[i];		
	}
		for(i=0; i<5; i++){
		printf("%.0f ", valor[i]);	
	}
	media=controle/5;
	printf("\n%2f", media);	
}
