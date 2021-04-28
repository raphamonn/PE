#include <stdio.h>
#include <string.h>

/*SEM usar a função strlen(), faça um programa que LEIA uma string, 
com até 8 caracteres, imprima cada caractere e a sua quantidade.*/

void main(){
	char text[8];
	int cont=0;
	scanf("%s", text);

	for(int i=0; text[i]!='\0'; i++){
		printf("%c\n", text[i]);
		cont++;
	}
	if(cont==9){
    	cont--;
	}
	printf("%d\n", cont);
}

