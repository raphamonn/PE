/*Faça um programa que leia DOIS números e mostre o MAIOR deles. Se, por acaso, os dois números forem IGUAIS, imprima a mensagem “Numeros Iguais!!”.*/

#include <stdio.h>


void main(){
 int a,b;
 printf("Digite um numero: ");
 scanf("%d", &a);

 printf("Digite um numero: ");
 scanf("%d", &b);

 if(a>b){
    printf("O %d eh o maior numero! \n",a);
    }
        else if(a==b){
            printf("Numeros iguais! \n");

        }
        else if(b>a){
        printf("O %d eh o maior numero! \n",b);
        }

}