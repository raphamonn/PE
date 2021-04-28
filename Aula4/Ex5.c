#include <stdio.h>

/*Implemente um algoritmo que LEIA do TECLADO um vetor de 10 posições e escreva na tela os números PARES e ÍMPARES. 
É importante destacar que o seu algoritmo NÃO deve imprimir, caso tiver, números PARES e IMPARES repetidos. 
Alem disso, o MAIOR e MENOR numero tambem deve ser impresso.
*/
void pares(int *vet, int n){
    int cont;
    printf("Numeros pares: ");
   
    for(int i=0; i<n; i++){
        cont=0;
        if(vet[i]%2==0){   	
            for(int aux=0; aux<i; aux++){
                if(i!=aux && vet[i]==vet[aux]){
                    cont++;
                }    
            }
            if(cont==0){
                printf("%d\n", vet[i]);    
            } 
        } 
    }
}

void impares(int *vet, int n){
    int cont;
    printf("Numeros impares: ");
   
    for(int i=0; i<n; i++){
        cont=0;
        if(vet[i]%2!=0){
            for(int aux=0; aux<i; aux++){
                if(i!=aux && vet[i]==vet[aux]){
                    cont++;
                } 
            }
            if(cont==0){
                printf("%d\n", vet[i]);    
            }
        }
        
    }
    int menor=999999, maior=-999999;
    for(int i=0; i<n; i++){
    if(vet[i]<menor){
    menor=vet[i];
    }
    else if(vet[i]>maior){
    maior=vet[i];    
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}    

void main(){
    int n=10,vet[n];
	        
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);   
    }
	pares(vet, n);
    impares(vet, n);
}





    
    
    


    


