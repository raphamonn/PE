#include <stdio.h>

/*mplemente uma fun��o que calcule a �rea da superf�cie e o volume de uma esfera de raio R. Essa fun��o deve obedecer ao prot�tipo:

void calculo(float R, float *area, float *volume)

A �rea da superf�cie e o volume s�o dados, respectivamente, por:

A = 4 * pi * R2
V = (4 * pi * R3)/3

Ps: Os valores da �rea e voluma devem ser impressos na fun��o main(). Al�m disso, o valor de pi deve ser 3.14. */

void calculo(float *parea,float *pvolume,float R){
     *parea=4*3.14*R*R;
     *pvolume=(4*3.14*R*R*R)/3;
}

int main(){
    float r,area=0, volume=0;

    scanf("%f", &r);

    calculo(&area,&volume,r);

    printf("Area: %f\n", area);
    printf("Volume: %f", volume);
}





