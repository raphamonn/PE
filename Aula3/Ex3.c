/*Implemente um algoritmo que mostre uma contagem regressiva na tela, iniciando em NUM e terminando em 0. 
Vale ressaltar que NUM é definido pelo usuário e deve ser >=0, sendo que o programa deve ser finalizado SOMENTE 
quando o usuário digitar o NUM>=0. Além disso, uma mensagem "O numero deve ser >=0!" deve ser impressa, caso NUM<0. 
Por fim, uma mensagem “FIM!” será mostrada após a contagem.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  int a,b,cont;
  printf("Digite um numero: ");
  scanf("%d", &a);

  while(a<0) {
    printf("O numero deve ser >=0! \n");
    scanf("%d", &a);
  }
  b=a;
  
  for(cont=1;b>=0;b--){
    printf("%d ", b);
  }
  printf("FIM!");

}
