#include<stdio.h>
#include<stdlib.h>

/*Implemente uma fun��o que RECEBA como par�metro uma MATRIZ A contendo 3 linhas e 3 colunas.
A fun��o deve RETORNAR o ponteiro para um VETOR B de tamanho 3 ALOCADO DINAMICAMENTE, em que
cada POSI��O de B � a SOMA dos n�meros daquela COLUNA da matriz. Por fim, os elementos de B devem
ser IMPRESSOS no main(). */

/*-------------------------------------------------------IMPORTANTE----------------------------------------------------------------------
Para passar como par�metro um vetor, n�o � necess�rio especificar a quantidade de elementos. Por exemplo,

void main(){
     int vet[10];
     funcao_Teste(vet);
}
void funcao_Teste(int *vet){

}

Tamb�m � v�lido definir a fun��o da seguinte forma:

void funcao_Teste(int vet[ ]){

}

A passagem de uma matriz[linha][coluna] por par�metro � um pouco diferente do vetor (array com uma dimens�o), sendo necess�rio
especificar pelo menos o tamanho da coluna. Portanto, uma fun��o que recebe uma matriz com cinco linhas e quatro colunas deve ser
apresentada da seguinte forma:

void funcao_Teste (int matriz[ ][4], int n){

}

ou

void funcao_Teste (int matriz[5][4], int n){

}

Na primeira nota��o (int matriz[ ][4]), � informado para o compilador que um array � passado, sendo que cada elemento � um outro
array de quatro posi��es. Neste caso, o array ter� quatro colunas, mas poder� ter, por exemplo, n linhas. Isto � necess�rio para
o compilador saber quantas colunas devem ser "puladas" para chegar na pr�xima linha. Lembrando que a quantidade de linhas � facultativa.
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


