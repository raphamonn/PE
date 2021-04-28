#include <stdio.h>

/* Escreva um programa que declare um inteiro (x = 3), um float (y = 3.4) e um char (z = 'A'), e PONTEIROS para inteiro, float, e char.
ASSOCIE as variáveis aos ponteiros (use &). MODIFIQUE , pelo TECLADO, os valores de CADA variável usando os PONTEIROS. IMPRIMA os valores das variáveis 
ANTES e APÓS a modificação.*/

void main() {
    int x=3;
    float y=3.4;
    char z='A';

    int *px=NULL;
    float *py=NULL;
    char *pz=NULL;

    px=&x;
    py=&y;
    pz=&z;

    printf("Antes:\nx = %d\ny = %f\nz = %c\n", x, y, z);
    scanf("%d%f %c", &(*px),&(*py),&(*pz));
    printf("Depois:\nx = %d\ny = %f\nz = %c\n", x, y, z);
}
