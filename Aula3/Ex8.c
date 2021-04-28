/*
Faça um programa que LEIA um valor inteiro e positivo N, calcule o mostre o valor E, conforme a fórmula a seguir:
    E=[(1/1!)+(1/2!)+*1/3!)+...(1/N!)]
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int Numero_a_ser_fatorado);

void main() {
    int N,c;
    float div,E=0,a=1;
    scanf("%d", &N);

    for(c=1;c<=N;c++){
        div=a/fatorial(c);
        E=E+div;
    }
    printf("%f \n",E);

}
int fatorial(int Numero_a_ser_fatorado){
    int contador=1;

    for(int x=2; x<=Numero_a_ser_fatorado; x++){
        contador=contador*x;
    }
    return contador;
}




