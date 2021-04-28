/*
Faça um programa para LER 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados 
no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o 
programa deverá pedir a ele para digitar outro número imprimindo na tela a seguinte mensagem: "Numero já digitado! Digite 
outro numero!". Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os 
números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/
#include <stdio.h>

int check(int *vet, int i, int x ){
	for(int k=0; k<i; k++){
		if(x==vet[k]){
			return 1; //numero repetido		
		}
	}
	return 0;	
}

void main(){
	int vet[10],aux, verify ; 
	scanf("%d", &vet[0]);
	
	for(int i=1; i<10; i++){
		scanf("%d", &aux);
		verify=check(vet, i, aux);	

		while(verify==1){
			printf("Numero ja digitado! Digite outro numero!\n");
			scanf("%d", &aux);
			verify=check(vet,i, aux);		
		}
		vet[i]=aux;	
	}
	for(int i=0; i<10; i++){
		printf("%d\n", vet[i]);	
	}	
}
