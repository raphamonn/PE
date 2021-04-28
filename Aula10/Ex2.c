#include <stdio.h>

/*Após estudar o Slide 8 da Aula 10: Ordenação (Primeira Parte), implemente o seu algoritmo Bubble Sort ordenando os elementos de forma CRESCENTE.
Vale ressaltar que o tamanho e os elementos do vetor devem ser definidos pelo usuário.*/

int * ordem(int *vet, int N);

void main() {
    int N=0;
    int *p=NULL;

    scanf("%d", &N);
    int vet[N];

    p=vet;

    for(int i=0; i<N; i++){
        scanf("%d", &vet[i]);
    }

    p= ordem(vet,N);

    for(int i=0; i<N; i++){
        printf("%d ", p[i]);
    }

}

int * ordem(int *vet, int N){
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
