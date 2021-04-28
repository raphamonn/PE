#include <stdio.h>
#include <stdlib.h>

/*  Faça um programa que leia um valor inteiro N NÃO NEGATIVO.
Se o valor de N for inválido, a mensagem ("Numero deve ser POSITIVO! Digite um numero VALIDO!") deve ser impressa e o usuário deve digitar outro valor até que ele seja válido
(ou seja, POSITIVO). Em seguida, leia, do teclado, um vetor V contendo N posições de inteiros, em que cada valor deverá ser MAIOR OU IGUAL A 2.
Caso o número digitado NÃO seguir a condição (>=2), a mensagem ("Digite um numero >=2!") deve ser impressa para o usuário digitar um outro valor até que ele seja válido.
Por fim, os elementos do vetor devem ser impressos. Esse vetor deverá ser alocado dinamicamente.
*/

void main(){
    int num;
    scanf("%d", &num);
    while(num<0){
        printf("Numero deve ser POSITIVO! Digite um numero VALIDO!!\n");
        scanf("%d", &num);
    }
    int *p=NULL;

    p = (int*) malloc (num * sizeof(int));

    for(int i=0; i<num; i++){
        scanf("%d", &p[i]);

        while(p[i]<2){
            printf("Digite um numero >=2!\n");
            scanf("%d", &p[i]);
        }
    }
    for(int i=0; i<num; i++){
        printf("%d ", p[i]);
    }
    free(p);
    p = NULL;
    printf("\n");
}
