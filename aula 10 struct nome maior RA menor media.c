#include<stdio.h>
#include<locale.h>

typedef struct{
    char nome[25], ra[7];
    float media;
}aluno;

void main(){
    setlocale(LC_ALL, "Portuguese");

    aluno vetor_aluno[5];
    int i;
    float menor, maior;

    for(i = 0; i < 5; i++){
        printf("\nInforme o nome do aluno: ");
        gets(vetor_aluno[i].nome);
        printf("RA do aluno: ");
        gets(vetor_aluno[i].ra);
        printf("Informe a media do aluno: ");
        scanf("%f", &vetor_aluno[i].media);
        fflush(stdin); // limpa o buffer do teclado
    }

    maior = vetor_aluno[0].media;
    menor = vetor_aluno[0].media;

    for(i = 0; i < 5; i++){
        if(vetor_aluno[i].media > maior)
            maior = vetor_aluno[i].media;
        if(vetor_aluno[i].media < menor)
            menor = vetor_aluno[i].media;
    }

     for(i = 0; i < 5; i++){
        if(vetor_aluno[i].media == maior)
            printf("Aluno %s tem maior media \n", vetor_aluno[i].nome);
        if(vetor_aluno[i].media == menor)
            printf("RA %s tem a menor media \n", vetor_aluno[i].ra);
     }
}
