#include <stdio.h>
#include <stdlib.h>

/*Implemente uma FUNÇÃO que receba, como parâmetro, um inteiro N e crie uma  MATRIZ ALOCADA DINAMICAMENTE contendo
N linhas e N colunas. Essa matriz deve conter o valor 0 na DIAGONAL PRINCIPAL, o valor 1 nos elementos ACIMA DA DIAGONAL
PRINCIPAL e o valor −1 nos elementos ABAIXO DA DIAGONAL PRINCIPAL. Por fim, a MATRIZ deve ser RETORNADA e IMPRESSA no main().
*/

int* matriz(int size);

void main(){
    int size=0, *retP=NULL;

    scanf("%d", &size);

    retP=matriz(size);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", retP[i*size+j]);
        }
        printf("\n");
    }

}

int* matriz(int size){
    int *p= (int *) malloc (size * size * sizeof(int));

    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(i==j){
                p[i*size+j]=0;
            }
            else if(i<j){
                p[i*size+j]=1;
            }
            else if(i>j){
                p[i*size+j]=-1;
            }
        }
    }
    return(p);
}



