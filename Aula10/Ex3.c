#include <stdio.h>

/*Modifique o algoritmo Selection Sort, apresentado em aula, para que os números sejam ordenados de forma DECRESCENTE (do maior para o menor).
Vale ressaltar que o tamanho e os elementos do vetor devem ser definidos pelo usuário.*/

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
    int i=0, j=0, maior=0, aux=0;

    for(i=0; i<N-1; i++){
        maior=i;
        for(j=i+1; j<N; j++){
            if(vet[j]>vet[maior]){
                maior=j;
            }
        }
        if(i!=maior){
            aux=vet[i];
            vet[i]=vet[maior];
            vet[maior]=aux;
        }
    }
    return vet;
}
