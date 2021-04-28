#include <stdio.h>
#include <stdlib.h>

/*  Fa�a um programa que leia um valor inteiro N N�O NEGATIVO.
Se o valor de N for inv�lido, a mensagem ("Numero deve ser POSITIVO! Digite um numero VALIDO!") deve ser impressa e o usu�rio deve digitar outro valor at� que ele seja v�lido
(ou seja, POSITIVO). Em seguida, leia, do teclado, um vetor V contendo N posi��es de inteiros, em que cada valor dever� ser MAIOR OU IGUAL A 2.
Caso o n�mero digitado N�O seguir a condi��o (>=2), a mensagem ("Digite um numero >=2!") deve ser impressa para o usu�rio digitar um outro valor at� que ele seja v�lido.
Por fim, os elementos do vetor devem ser impressos. Esse vetor dever� ser alocado dinamicamente.
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
