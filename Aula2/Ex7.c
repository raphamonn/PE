/* importância de R$780.00 será dividida entre três ganhadores de um concurso, sendo que:

O primeiro ganhador receberá 46% do total;
O segundo receberá 32% do total;
O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.

DICA!!
Para definir a quantidade de casas decimais de uma variável do tipo float, em vez de %f basta usar %.2f, sendo que o número dois significa três casas decimais. Por exemplo:

printf("Testando %.2f\n", num);*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    double a,b,c,d;


    a=780.0;
    b=a*46/100;
    c=a*32/100;
    d=a-(b+c);

    printf("\n Primeiro ganhador: R$ %f",b );
    printf("\n Segundo ganhador: R$%f",c );
    printf("\n Terceiro ganhador: R$ %f",d );

}