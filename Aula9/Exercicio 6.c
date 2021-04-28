#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e RETORNE o ponteiro para um vetor de tamanho N alocado dinamicamente.
Se N for negativo ou igual a zero, um PONTEIRO NULO deverá ser retornado e a frase "Ponteiro NULL. deve ser impressa".
Caso contrario, deve-se imprimir "Ponteiro NAO NULL.".
*/


int *validP (int qtd);

int main(){
    int *retP=NULL;
    int num;
    scanf("%d", &num);
    retP=validP(num);

    if(retP==NULL){
        printf("Ponteiro NULL.");
    }
    else{
        printf("Ponteiro nao NULL");
    }
    free(retP);
    retP = NULL;
    printf("\n");
}

int *validP (int num){
    int *p= NULL;
    p = (int *) malloc (num * sizeof(int));
    if (num<0 || num==0){
        p=NULL;
    }
    return (p);
}
