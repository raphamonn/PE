/*
Escreva uma FUNÇÃO que receba por parâmetro uma temperatura em graus Fahrenheit e a RETORNE convertida em graus Celsius. 
A fórmula de conversão é: C = (F – 32.0) *(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

PS: O cálculo de C deve ser arredondado para DUAS casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

float conversao(float F){
    float C;
    
    C=(F-32.0)*(5.0/9.0);
    printf("%.2f", C);
}

void main() {
    float F;

    scanf("%f", &F);
    conversao(F);
}
