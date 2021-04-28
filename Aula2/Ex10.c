/*Usando o comando switch, implemente um algoritmo que leia um inteiro entre 1 e 7 e imprima o dia da semana 
correspondente a esse número. Isto é, Domingo!, se 1, Segunda-feira!, se 2, e assim por diante. Além disso, 
caso o usuário insira qualquer número diferente de 1-7, a mensagem "Numero invalido!" deve ser impressa.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    int a;

    printf("Insira um numero: ");
    scanf("%i", &a);

    switch(a){
    case 1:
        printf("Domingo! \n");
        break;
    case 2:
        printf("Segunda-feira! \n");
        break;
    case 3:
        printf("Terça-feira! \n");
        break;
    case 4:
        printf("Quarta-feira! \n");
        break;
    case 5:
        printf("Quinta-feira! \n");
        break;
    case 6:
        printf("Sexta-feira! \n");
        break;
    case 7:
        printf("Sabado \n");
        break;
    default:
        printf("Numero invalido!");
    }
}