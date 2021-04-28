#include<stdio.h>

/*Modifique o algoritmo Insertion Sort, apresentado em aula, para que os números sejam ordenados de forma DECRESCENTE (do maior para o menor).
Vale ressaltar que o tamanho e os elementos do vetor devem ser definidos pelo usuário. */

int *ordem(int *vet, int N);

void main(){
    int N=0;
    scanf("%d", &N);
    int vet[N], *p=vet;

    for(int i=0;i<N;i++){
        scanf("%d", &vet[i]);

    }
    p=ordem(vet, N);

    for(int i=0; i<N;i++){
        printf("%d ", p[i]);
    }

}

int *ordem(int *vet, int N){
    int i=0, j=0, atual=0;

    for(i=0; i<N; i++){
        atual=vet[i];
        j=i;

        while(j>0&&atual>vet[j-1]){
            vet[j]=vet[j-1];
            j--;
        }
        vet[j]=atual;
    }


    return vet;
}
