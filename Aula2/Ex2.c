/*Escreva um programa que leia, na seguinte ordem, a quantidade de notebooks das marcas Sony, 
Dell e Toshiba de uma loja. Os valores devem ser entrados via teclado. Como saída, o programa 
deve apresentar a quantidade de notebooks discriminadas por marca (Sony, Dell e Toshiba) e o seu total. 
*/

#include <stdio.h>

void main()
{
   int s, d, t, total;

   printf("Sony: \n");
   scanf("%d", &s);

   printf("Dell: \n");
   scanf("%d", &d);

   printf("Toshiba: \n");
   scanf("%d", &t);


   total=s+t+d;

   printf("%d notebook(s) da Sony \n",s);
   printf("%d notebook(s) da Dell \n",d);
   printf("%d notebook(s) da Toshiba \n",t);
   printf("Total de %d Notebooks \n",total);
}