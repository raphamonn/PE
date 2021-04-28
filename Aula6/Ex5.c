#include <stdio.h>

/* Usando a estrutura "atleta" do exercício anterior, implemente um algoritmo que 
LEIA os dados de QUATRO atletas e os exiba por ordem de IDADE, do mais velho para o mais novo.*/

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void main(){
    struct atleta a[4];
    int i, idades[4], aux;

    for(i=0; i<4; i++){  //obtenção dos dados
        scanf("%s",a[i].nome);
        scanf("%i",&a[i].idade);
        scanf("%f",&a[i].altura);
        printf("\n");
        idades[i]=a[i].idade; // uso de um novo vetor para não confundir as idades entre si e poder ainda assim imprimo-los em ordem correta.
        }
    for(i=0; i<4; i++){
        for(int j=i+1;j<4;j++){
            if(idades[i]<idades[j]){
                aux= idades[i];
                idades[i]=idades[j];
                idades[j]= aux;
            }
        }
    }

    for(i=0;i<4;i++){
        printf("%i ", idades[i]);
    }

}
