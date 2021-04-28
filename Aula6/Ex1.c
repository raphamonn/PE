/*Implemente um programa que leia, por meio do teclado, o NOME e a IDADE de uma pessoa e 
armazene esses dados em uma ESTRUTURA. Em seguida, imprima na tela os dados da estrutura lida.
*/
#include <stdio.h>

struct pessoa{
    char nome[50];
    int idade;
} ;

void main(){
    struct pessoa p;

    scanf("%s", p.nome);
    scanf("%d", &p.idade);
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d", p.idade);
}
