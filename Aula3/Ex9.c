/*
Faça uma função que receba um número (num) inteiro de 1 a 7 e imprima na tela o dia da semana, 
de acordo com o número digitado pelo usuário. Caso o usuário digite um número incorreto (num<1 OU num>7), 
o algoritmo deve informar o alerta "O numero deve ser >=1 e <=7!" e solicitar NOVAMENTE que o usuário digite o número correto.
*/

#include <stdio.h>
#include <stdlib.h>

int funcao (int num){
   switch(num){
		case 1:
			printf("Domingo");

		case 2:
			printf("Segunda-Feira");
			break;

		case 3:
			printf("Terça-Feira");
			break;

		case 4:
			printf("Quarta-Feira");
			break;

		case 5:
			printf("Quinta-Feira");
			break;

		case 6:
			printf("Sexta-Feira");
			break;

		case 7:
			printf("Sabado");
			break;
   }
}

void main() {
    int a;

    scanf("%d", &a);

    while(a<1 || a>7){
		printf("O numero deve ser >=1 e <=7!\n");
		scanf("%d", &a);
    }
    funcao(a);
}

