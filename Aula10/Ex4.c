#include <stdio.h>

/*Após estudar o Slide 16 da Aula 10: Ordenação (Primeira Parte), implemente o seu algoritmo Selection Sort ordenando os elementos de forma CRESCENTE.
Vale ressaltar que o tamanho e os elementos do vetor devem ser definidos pelo usuário */

int *ordem(int *vet, int N);

void main(){
    int N=0;
    scanf("%d", &N);
    int vet[N];
    int *p=vet;

    for(int i=0; i<N; i++){
        scanf("%d", &vet[i]);
    }
    p= ordem(vet, N);

    for(int i=0; i<N; i++){
        printf("%d ", p[i]);
    }
}

int *ordem(int *vet, int N){
    int i=0, j=0, menor=0, aux=0;

    for(i=0; i<N-1; i++){
        menor=i;
        for(j=i+1; j<N; j++){
            if(vet[j]<vet[menor]){
                menor=j;
            }
        }
        if(i!=menor){
            aux=vet[i];
            vet[i]=vet[menor];
            vet[menor]=aux;
        }
    }
    return vet;
}

