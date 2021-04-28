/*Faça um programa que leia um número inteiro e imprima seu antecessor e seu sucessor.*/

void main()
{
 int a,b,c,d;

 printf("digite um numero: ");
 scanf("%d", &a);

 d=a;
 b=--d;
 c=d+2;

 printf("\n Antecessor de %d eh: %d",a,b);
 printf("\n Sucessor de %d eh: %d",a,c);
}
