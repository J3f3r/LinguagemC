#include<stdio.h>
#include<locale.h>

typedef struct{
    char nome[30], ra[10];
    float media;
} aluno;

void leVetor(aluno *p, int n){
    int i;
    for(i = 0; i < n; i++){
       fflush(stdin);
       printf("\nInforme o nome: ");
       gets((p+i)->nome);
       printf("Informe RA do aluno (a): ");
       gets((p+i)->ra);
       printf("Informe a media: ");
       scanf("%f", &(p+i)->media);
    }
}

float calculaMediaGeral(aluno *p, int n){
    int i;
    float soma = 0, media;

    for(i = 0; i < n; i++)
        soma = soma + (p+i)->media;

    media = soma / n;
    return media;
}


void exibeNomes(aluno *p, int n, float media_geral){
    int i;
    for(i = 0; i < n; i++){
        if((p+i)->media < media_geral)
            printf("O aluno (a) %s possui nota menor que a media geral: \n", (p+i)->nome);
    }
}

float retornaMenorMedia(aluno *p, int n){
    int i;
    float menor;

    menor = (p+0)->media;

    for(i = 0; i < n; i++){
        if((p+1)->media < menor)
            menor = (p+i)->media;
    }
    return menor;
}

void exibeRa(aluno *p, int n, float menor){
    int i;

    for(i = 0; i < n; i++){
        if((p+i)->media == menor)
            printf("O aluno com RA %s possui menor media \n", (p+i)->ra);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    aluno *p;
    int i, n;
    float media_geral, menor_media;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(aluno));
    leVetor(p, n);

    media_geral = calculaMediaGeral(p, n);
    printf("\nMedia geral: %.2f \n", media_geral);
    exibeNomes(p, n, media_geral);

    menor_media = retornaMenorMedia(p, n);
    exibeRa(p, n, menor_media);
    free(p);
}
