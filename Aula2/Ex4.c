/*
mplemente um algoritmo para calcular e comparar a área de dois retângulos A e B. 
Antes de calcular a área, o algoritmo deve verificar se os dados de entrada (base e altura) representam um retângulo. 
Caso a resposta seja positiva, deve-se verificar qual retângulo possui a maior área ou se eles possuem tamanhos iguais. 
Vale ressaltar que os dados de entrada (do tipo float) devem seguir a seguinte ordem:
*/
 
 #include <stdio.h>

void main()
{
  float basea, alturaa, baseb, alturab, areaa, areab;

  printf("Base do retângulo A: ");
  scanf("%f", &basea);

  printf("Altura do retângulo A:");
  scanf("%f", &alturaa);

  printf("Base do retângulo B:");
  scanf("%f", &baseb);

  printf("Altura do retângulo B: ");
  scanf("%f", &alturab);

  areaa=basea*alturaa;
  areab=baseb*alturab ;

  if(basea==alturaa || baseb==alturab){
  printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
  }
    else if (areaa>areab){
    printf("\n A area do retangulo A eh %f ", areaa);
    printf("\n A area do retangulo B eh %f ", areab);
    printf("\n A area do retangulo A eh maior do que a do retangulo B!");

  }
  else if (areab>areaa){
    printf("\n A area do retangulo A eh %f ", areaa);
    printf("\n A area do retangulo B eh %f ", areab);
    printf("\n A area do retangulo B eh maior do que a do retangulo A!");

  }
  else if (areab==areaa){
    printf("\n A area do retangulo A eh %f ", areaa);
    printf("\n A area do retangulo B eh %f ", areab);
    printf("\n A area do retangulo A eh igual ao do retangulo B!");
  }

}
