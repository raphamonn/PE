/*Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas 
(1-Soma, 2-Subtração, 3-Divisão e 4-Multiplicação). O usuário escolhe uma das opções, e o seu 
algoritmo solicita DOIS valores numéricos e realiza a operação, mostrando o resultado. Entretanto, se 
o usuário digitar alguma opção diferente de 1-4, a seguinte mensagem deve ser apresentada: "Numero Invalido!". 
Além disso, os valores numéricos das operações de SOMA, SUBTRAÇÃO e MULTIPLICAÇÃO devem ser declarados como INTEIROS 
(int) e no caso da DIVISÃO, devem ser declarados como double.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,d;
    double e,b,c;

    printf("\n Escolha uma operacao: ");
    scanf("%d", &a);

    printf("\n Digite um numero: ");
    scanf("%lf", &b);

    printf("\n Digite um numero: ");
    scanf("%lf", &c);

    switch(a){

    case 3:
    e=b/c;
    printf("O resultado da divisao eh: %lf", e);
    break;

    case 1:
    d=b+c;
    printf("O resultado da soma eh: %d", d);
    break;

    case 2:
    d=b-c;
    printf("O resultado da subtracao eh: %d", d);
    break;

    case 4:
    d=b*c;
    printf("O resultado da multiplicacao eh: %d", d);
    break;

    default:
    printf("Numero invalido");
    break;
    }
}
