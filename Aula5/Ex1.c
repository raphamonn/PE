/*
Faça um programa que leia uma matriz (inteiros) de tamanho 3 × 3 com números diferentes.
Imprima na tela o menor valor, maior valor contido nessa matriz e a sua localização (linha e coluna).
*/
#include <stdio.h>

void main()
{
    int mat[3][3], maior=0, Mlinha=0, Mcoluna=0;
    int menor=999999999, menorlinha=0, menorcoluna=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);

            if(mat[i][j]>maior){
                maior=mat[i][j];
                Mlinha=i;
                Mcoluna=j;
            }

            if(mat[i][j]<menor){
                menor=mat[i][j];
                menorlinha=i;
                menorcoluna=j;
            }
        }
    }
    printf("Maior:%d \n", maior);
    printf("Posicao (maior):%d linha e %d coluna \n", Mlinha, Mcoluna);
    printf("Menor:%d \n", menor);
    printf("Posicao (menor):%d linha e %d coluna \n", menorlinha, menorcoluna);
}

