/*
Crie uma estrutura para representar as coordenadas de UM PONTO no plano (posições X e Y).
Em seguida, declare e leia do teclado DOIS pontos e exiba a distância entre eles.
*/
#include <stdio.h>
#include <math.h>

struct ponto{
    float x;
    float y;
} ;

void main(){
    struct ponto p1,p2;
    float distancia;


    scanf("%f", &p1.x);
    scanf("%f", &p1.y);

    scanf("%f", &p2.x);
    scanf("%f", &p2.y);

    distancia=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    printf("%.1f", distancia);


}

