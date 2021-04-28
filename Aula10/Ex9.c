#include<stdio.h>

/*
* Dado um NUMERO, o TAMANHO (tam) do VETOR[tam] com os elementos,
* definidos pelo usuario, JA ORDENADOS, implemente um algoritmo
* para inserir este NUMERO na sua POSICAO correta. Desloque os outros
* numeros, se necessario (considere que ha espaço vago no vetor).
*/

int *ordem (int *vet, int tam);

void main(){
    int N, tam, aux;

    scanf("%d ", &N);
    scanf("%d", &tam);
    aux=tam;
    tam=tam+1;

    int vet[tam];

    for(int i=0; i<aux; i++){
        scanf("%d", &vet[i]);
    }

    vet[tam-1]=N;

    vet[tam]=ordem(vet,tam);

    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
}

int *ordem (int *vet, int N){
    int aux;

    for(int i=0; i<N;i++){
        for (int j=0; j<N-1; j++){
            if (vet[j] > vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
    }
    return vet;
}
