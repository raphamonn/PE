/*Faça um programa que leia, pelo teclado, um vetor inteiro com 6 posições. Verifique 
se existem valores IGUAIS e os escreva na tela. Caso NÃO existem valores iguais, a 
seguinte mensagem deve ser impressa: "Nao existem valores iguais!".*/
#include <stdio.h>

int iguais(int *vet, int n){ // verificador de repetição de numeros;
	int aux, cont=0;
	 
	printf("Valores repetidos\n"); 
	for(int i=0; i<n; i++){
        cont=0; 
        for(int aux=0; aux<i; aux++){ 
        	if(i!=aux && vet[i]==vet[aux])
            	cont++;     
        }
    	if(cont!=0){  		
    		printf("%d\n", vet[i]);   //caso o numero seja repetido ele será impresso. 
        }      
    }
	if(cont==0)
		printf("Nao existem valores iguais!");
}

void main(){
	int n=6, vet[n];
	for(int i=0; i<n; i++){
		scanf("%d", &vet[i]);	
	}
	iguais(vet, n);
}
