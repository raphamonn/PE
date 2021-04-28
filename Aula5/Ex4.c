/*
Leia uma matriz de tamanho 3 x 3. Em seguida,
imprima a soma dos valores contidos em sua diagonal principal e tambem na sua diagonal secundaria.
*/
#include <stdio.h>

void main() {
    int mat[3][3], firstsum=0, secondsum=0;

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    firstsum=mat[0][0]+mat[1][1]+mat[2][2];
    secondsum=mat[0][2]+ mat[1][1]+ mat[2][0];

    printf("Soma diagonal principal: %d\n", firstsum);
    printf("Soma diagonal secundaria: %d\n", secondsum);

}
