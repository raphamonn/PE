#include<stdio.h>
#include<stdlib.h>

/*Implemente uma função que RECEBA como parâmetro uma MATRIZ A contendo 3 linhas e 3 colunas.
A função deve RETORNAR o ponteiro para um VETOR B de tamanho 3 ALOCADO DINAMICAMENTE, em que
cada POSIÇÃO de B é a SOMA dos números daquela COLUNA da matriz. Por fim, os elementos de B devem
ser IMPRESSOS no main(). */

/*-------------------------------------------------------IMPORTANTE----------------------------------------------------------------------
Para passar como parâmetro um vetor, não é necessário especificar a quantidade de elementos. Por exemplo,

void main(){
     int vet[10];
     funcao_Teste(vet);
}
void funcao_Teste(int *vet){

}

Também é válido definir a função da seguinte forma:

void funcao_Teste(int vet[ ]){

}

A passagem de uma matriz[linha][coluna] por parâmetro é um pouco diferente do vetor (array com uma dimensão), sendo necessário
especificar pelo menos o tamanho da coluna. Portanto, uma função que recebe uma matriz com cinco linhas e quatro colunas deve ser
apresentada da seguinte forma:

void funcao_Teste (int matriz[ ][4], int n){

}

ou

void funcao_Teste (int matriz[5][4], int n){

}

Na primeira notação (int matriz[ ][4]), é informado para o compilador que um array é passado, sendo que cada elemento é um outro
array de quatro posições. Neste caso, o array terá quatro colunas, mas poderá ter, por exemplo, n linhas. Isto é necessário para
o compilador saber quantas colunas devem ser "puladas" para chegar na próxima linha. Lembrando que a quantidade de linhas é facultativa.
----------------------------------------------------------------------------------------------------------------------------------------*/

int* vetB(int mat[][3]);

void main(){
    int matA [3][3];
    int *vet=NULL;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    vet=vetB(matA);

    for(int i=0; i<3; i++){
        printf("%d ", vet[i]);
    }
}

int* vetB(int mat[][3]){
    int *x=NULL, sum=0;

    x=(int*) malloc (3*sizeof(int));

    for(int i=0; i<3; i++){
        x[i]=0;
        for(int j=0; j<3; j++){
            x[i]=x[i]+mat[j][i];
        }
    }
    return(x);
}


