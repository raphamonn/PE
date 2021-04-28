#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Crie uma função que receba uma string (tamanho 6),
INVERTA os elementos da string e RETORNE o PONTEIRO para essa string invertida.
Por fim, na função main(), os elementos da string invertida devem ser impressos.*/

char* invertstr(char *str);

void main(){
    char str[6], *retP=NULL;
    scanf("%s", str);

    retP=invertstr(str);

    for(int i=0; i< strlen(str) ; i++){
        printf("%c ", retP[i]);
    }

    free(retP);
    retP = NULL;
    printf("\n");
}

char* invertstr(char *str){
    char *p=NULL;

    p = (char*) malloc(strlen(str) * sizeof(char));

    for (int i=0; str[i]!= '\0'; i++){
        p[i]= str[strlen(str)-1-i];
    }
    return (p);
}
