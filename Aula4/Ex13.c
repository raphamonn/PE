/*
Crie um vetor do tipo char com TAMANHO 8 e implemente um programa para ler uma string com ATÉ 5 caracteres e a IMPRIMA 
de TRÁS para a FRENTE. Caso o usuário digitar uma string com MAIS de 5 caracteres, a seguinte mensagem deve ser impressa: 
"Digite novamente a string com ate 5 caracteres:" para que uma NOVA sequência de caracteres seja inserida.
*/
#include <stdio.h>
#include <string.h>

void main(){
	char text[8];
	int tam=0;
	
	scanf("%s", text);
	tam= strlen(text);
	
	while(tam>5){
		printf("Digite novamente a string com ate 5 caracteres:\n");
		scanf("%s", text);
		tam= strlen(text);
	}	
	for(int i=5; i>=0; i--){
		printf("%c ", text[i]);
	}		
}
