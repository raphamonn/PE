#include <stdio.h>
#include <string.h>

/*Crie um array de caracteres de tamanho 8, LEIA uma string do teclado e CONTE quantas vogais (a, e, i, o, u) ela possui.
Entre com UM caractere (vogal ou consoante) e SUBSTITUA todas as VOGAIS da palavra dada por esse caractere.
Ao final, imprima a NOVA string e o número de vogais que ela possui.*/


void main(){
	char text[8], letra='x';
	int cont=0, i=0;

	scanf("%s", text);
	scanf(" %c", &letra);

	for(i=0; text[i]!='\0'; i++){
		if (text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'){
			cont++;
			text[i]=letra;
		}
	}
	printf("A string possui %d vogais.", cont);
	printf("%s\n", text);
}