/*
Faça um programa que LEIA uma string com 8 caracteres e IMPRIMA as quatro primeiras letras dela. O algoritmo deve imprimir 
na tela, se a string NÂO tiver 8 caracteres, a quantidade de caractere(s) digitada, mostrando a seguinte mensagem: "Voce 
digitou uma string com X caractere(s)!", sendo X a quantidade de caracteres digitada. Além disso, um ALERTA deve ser impresso 
e o usuário deve digitar NOVAMENTE a string: "A string deve ter 8 caracteres. Por favor, digite uma nova string:", caso o usuário 
NÃO respeitar a quantidade solicitada. 
*/
#include <stdio.h>
#include <string.h>

void main(){
	char text[8];
	int tam=0;

	scanf("%s", text);
	tam= strlen(text);
    
    while(tam<8){
        printf("Voce digitou uma string com %d caractere(s)!\n", tam);
        printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
        scanf("%s", text);
        tam= strlen(text);
    }
    for(int i=0; i<4; i++){
        printf("%c", text[i]);
    }
}



