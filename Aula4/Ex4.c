/*
Faça um programa que leia um VETOR de OITO posições. Em seguida, leia também DOIS valores X e Y, 
que devem ser verificados, quaisquer correspondentes a duas posições no vetor. Se os valores de X e Y 
forem <0 OU >=8, a seguinte mensagem deve ser impressa: "Valor de X invalido!" ou "Valor de Y invalido!". 
Após isso, o usuário deve digitar novamente o VALOR correto.  Por fim, o seu algoritmo deverá exibir a SOMA 
dos valores encontrados nas respectivas posições X e Y.
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
	int vetor[8], x=0, y=0, soma=0, i=0;
	
	for(i=0; i<8; i++){
		scanf("%d", &vetor[i]);	
	}
	scanf("%d", &x);	
	while (x<0 || x>=8){
		printf("\nValor de X invalido!");
		scanf("%d", &x);	
	}
	scanf("%d", &y);
	while (y<0 || y>=8){
		printf("\nValor de Y invalido!");
		scanf("%d", &y);	
	}
	soma=vetor[x]+vetor[y];
	printf("\nsoma eh: %d", soma);			
	
}
