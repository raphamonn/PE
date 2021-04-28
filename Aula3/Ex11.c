/*
Implemente uma função para VERIFICAR se um número é um quadrado perfeito. Um quadrado perfeito é um número 
inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Exemplos: 1, 4, 9. Se 
um número for um quadrado perfeito, a seguinte mensagem será impressa: "Eh um quadrado perfeito!". Caso 
contrário, deve-se imprimir: "Nao eh um quadrado perfeito!".
*/

#include <stdio.h>
#include <math.h>

int raiz (int a){
    int x= sqrt(a);
    if(x*x != a){
        printf("Nao eh um quadrado perfeito! \n ");
    }
    else{
        printf("Eh um quadrado perfeito! \n");
    }
}

void main() {
    int a;
    scanf("%d", &a);
    raiz(a);
}


