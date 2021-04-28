#include <stdio.h>

/*Implemente uma função que aceita como parâmetro um array de INTEIROS com N valores, e determina o MAIOR elemento do array e a QUANTIDADE de vezes que este elemento ocorreu no array.
Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para o programa que a chamou o valor 15 e o
número 3 (indicando que o número 15 ocorreu 3 vezes). Os DADOS DE ENTRADA do algoritmo são o número N e os elementos do array.*/

void function(int *p, int n){
    int maior=0, qtd =0;

    for(int i=0; i<n; i++){
        if(*p > maior){
            maior=*p;
        }
        p++;
    }
    p--;

    for(int i=0; i<n; i++){
        if(*p==maior){
            qtd++;
        }
    p--;
    }
    printf("O numero %d ocorreu %d vezes.", maior,qtd);
}


void main(){
    int n;
    scanf("%d", &n);
    int vet[n];

    int *p=vet;

    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    function(p,n);
}

