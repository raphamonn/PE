#include<stdio.h>

/*Modifique o algoritmo Insertion Sort, apresentado em aula, para que os elementos sejam ordenados, de forma CRESCENTE,
na medida em que os recebem, ou seja, SEM ter todo o conjunto de  dados para colocá-los em ordem. Vale ressaltar que o tamanho
(tam) e os elementos do vetor devem ser definidos pelo usuário.*/


void main(){
    int tam,aux;

    scanf("%d", &tam);

    int vet[tam];

    for(int i=0; i<tam; i++){
        scanf("%d", &vet[i]);

        for(int j=0; j<i; j++){
            if(vet[i]< vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }

        for(int j=0; j< i+1; j++){
            printf("%d ", vet[j]);
        }
        printf("\n");
    }

}
