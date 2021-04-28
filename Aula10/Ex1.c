#include <stdio.h>

/*Modifique o algoritmo Bubble Sort, apresentado em aula, para que os números sejam ordenados de forma DECRESCENTE (do maior para o menor).
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
            if (vet[j] < vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
    }
    return vet;
}
