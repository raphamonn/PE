#include<stdio.h>

/*Faça um programa que leia, pelo TECLADO, DOIS (2) valores INTEIROS e chame uma função que receba estas DUAS variáveis e TROQUE o seu conteúdo, ou seja,
esta função é chamada passando DUAS vari�veis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A. Após a troca, as
variáveis atualizadas devem ser impressas na fun��o main(). Vale ressaltar que ponteiros devem ser utilizados para resolver o exercício.

Segue o pseudoc�digo:

void main(){
     scanf(A);
     scanf(B);
     funcao(A, B);
     print(A);
     printf(B);
}

void funcao(*A, *B){
     Realizar a troca!
} */

void troca(int *PA, int*PB){
    int aux=0;
    aux=*PA;
    *PA=*PB;
    *PB=aux;


}

void main(){
    int A,B,aux;

    scanf("%d%d", &A,&B);
    troca(&A,&B);

    printf("%d\n", A);
    printf("%d\n", B);
}

