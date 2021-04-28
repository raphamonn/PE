/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que LEIA os dados de QUATRO alunos e os armazena nessa estrutura.
Em seguida, exiba o NOME e as NOTAS do aluno que possui a MAIOR média geral dentre os quatro.
*/
#include <stdio.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota1,nota2,nota3;
};
void main(){
    struct aluno a[4];
    float media[4], maiormedia=0;

    for(int i=0; i<4; i++){  // obter dados de cada aluno
        scanf("%d", &a[i].matricula);
        scanf("%s", a[i].nome);
        scanf("%f", &a[i].nota1);
        scanf("%f", &a[i].nota2);
        scanf("%f", &a[i].nota3);
        printf("\n");

        media[i]=(a[i].nota1+a[i].nota2+a[i].nota3)/3;
        
        if(media[i]>maiormedia){
            maiormedia=media[i];
        }
    }

    for(int i=0; i<4; i++){  //Verificar qual o aluno com a maior m�dia e imprimir seus dados.
        if(media[i]==maiormedia){
            printf("%d\n", a[i].matricula);
            printf("%s\n", a[i].nome);
            printf("%.1f\n", a[i].nota1);
            printf("%.1f\n", a[i].nota2);
            printf("%.1f\n", a[i].nota3);
        }
    }
}




