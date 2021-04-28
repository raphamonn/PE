/*
Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se 
deseja efetuar com os números. Assim, se o símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, 
se for “/”, uma divisão e se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.
*/
#include <stdio.h>

float calculadora(float numeroum, float numero2,char letra){
    float resultado;
    switch(letra){
        case '+':
            resultado=numeroum+numero2;
            break;
        case '-':
            resultado=numeroum-numero2;
            break;
        case '/':
            resultado=numeroum/numero2;
            break;
        case '*':
            resultado=numeroum*numero2;
            break;
        
        default:
        printf("operacao invalida");
    }
    return resultado;
}

void main(){
    float numeroum, numero2, resultado;
    char letra;
    scanf("%f %f %c",&numeroum,&numero2,&letra);
    resultado = calculadora(numeroum,numero2,letra);
    printf("%.6f", resultado);
}
