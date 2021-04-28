/*Implemente um algoritmo que leia um Código de Operação: 

1: soma dois números (a + b);
2: soma três números (a + b + c);
3: multiplicação de dois números (a * b); 
0: sair. 
Se o usuário digitar a operação SAIR (0), o programa mostra o MENOR resultado obtido, considerando SOMENTE as operações realizadas, 
e ENCERRA. Entretanto, caso NENHUM Código de Operação seja selecionado, a seguinte mensagem deve ser impressa: "Nenhum calculo foi realizado!". 
Caso contrário, solicitará a ENTRADA dos números (a e b OU a, b e c) e imprimirá o resultado da operação (soma ou multiplicação). Após isso, o 
programa volta a SOLICITAR o Código de Operação para o usuário digitar uma NOVA OPERAÇÃO.*/

#include <stdio.h>
#include <stdlib.h>

void main() {

    int seletor,a=0,b=0,c=0,result=0,controle=999999;

    do {

        scanf("%d", &seletor);

        if(seletor==1){ // Soma de dois numeros a e b.

            scanf("%d", &a);
            scanf("%d", &b);
            result=a+b;
            printf("a+b= %d \n", result);
        }

        if(seletor==2){   // Soma de tres numeros a b e c.
            scanf("%d", &a);
            scanf("%d", &b);
            scanf("%d", &c);
            result=a+b+c;
            printf("a+b+c= %d \n", result);
        }

        if(seletor==3){ // multiplicação de dois numeros a e b.
            scanf("%d", &a);
            scanf("%d", &b);
            result=a*b;
            printf("(a*b)= %d \n", result);
        }

        if(result<controle){
            controle=result;  // variável que será igual ao menor valor 
        }

    }while(seletor!=0);

    if(b==0 && c==0 && result==0){
        printf("Nenhum calculo foi realizado!");
    }
    else{
        printf("Menor resultado: %d", controle);
    }

}

