#include <stdio.h>

/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o NOME do atleta, sua IDADE e ALTURA.
Agora, implemente um algoritmo que leia os dados de QUATRO atletas, calcule e exiba os NOMES do atleta MAIS ALTO e do MAIS VELHO.*/


struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void main(){
    struct atleta a[4];
    float maisalto=0;
    int maisvelho=0, i;

    for(i=0; i<4; i++){  //obtenção dos dados
        scanf("%s",a[i].nome);
        scanf("%i",&a[i].idade);
        scanf("%f",&a[i].altura);

        printf("\n");

        if(a[i].idade>maisvelho){ //comparativo dos mais velhos
            maisvelho=a[i].idade;
        }

        if(a[i].altura>maisalto){ // comparativo dos mais altos
            maisalto=a[i].altura;
        }
    }

    for(i=0; i<4;i++){
        if(a[i].altura==maisalto){ // comparação se o atleta[i] tem a altura equivalente ao mais alto
            printf("Mais alto: %s\n", a[i].nome);
        }
    }
     for(i=0; i<4;i++){
        if(a[i].idade==maisvelho){ // comparação se o atleta[i] tem a idade equivalente ao mais velho.
            printf("Mais velho: %s\n", a[i].nome);
        }
    }
}
