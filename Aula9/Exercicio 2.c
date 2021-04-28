#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor.
 Além disso, leia o vetor do usuário e o imprima.
Por fim, o vetor criado deve ser desalocado.
*/

void main(){
    int num;
    scanf("%d", &num);
    int *p=NULL;

    p = (int *) malloc (num * sizeof(int));

    for (int i=0; i<num; i++){
        scanf("%d", &p[i]);
    }
    for (int i=0; i<num; i++){
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;
    printf("\n");
}
