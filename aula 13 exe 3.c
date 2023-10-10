#include<stdio.h>
#include<locale.h>
#include<string.h>

typedef struct{
    char nome[40], cidade[20], ra[5];
    float media;
}aluno;

void main(){
    setlocale(LC_ALL, "Portuguese");
    aluno *p1, *p2, *p3; // declaracao de ponteiros

    //alocacao dinamica de memoria
    p1 = malloc(sizeof(aluno));
    p2 = malloc(sizeof(aluno));
    p3 = malloc(sizeof(aluno));

    // le os dados dos aluno
    printf("\nDigite o nome do aluno: ");
    gets(p1->nome);
    printf("Digite o RA do aluno: ");
    gets(p1->ra);
    printf("Digite a cidade do aluno: ");
    gets(p1->cidade);
    strlwr(p1->cidade); // converte todos caractere para minusculo
    printf("Digite a media do aluno: ");
    scanf("%f", &p1->media);
    fflush(stdin); // limpa o buffer de entrada do teclado

    printf("\nDigite o nome do aluno: ");
    gets(p2->nome);
    printf("Digite o RA do aluno: ");
    gets(p2->ra);
    printf("Digite a cidade do aluno: ");
    gets(p2->cidade);
    strlwr(p2->cidade); // converte todos caractere para minusculo
    printf("Digite a media do aluno: ");
    scanf("%f", &p2->media);
    fflush(stdin); // limpa o buffer de entrada do teclado

    printf("\nDigite o nome do aluno: ");
    gets(p3->nome);
    printf("Digite o RA do aluno: ");
    gets(p3->ra);
    printf("Digite a cidade do aluno: ");
    gets(p3->cidade);
    strlwr(p3->cidade); // converte todos caractere para minusculo
    printf("Digite a media do aluno: ");
    scanf("%f", &p3->media);
    fflush(stdin); // limpa o buffer de entrada do teclado

    // mostrar o nome dos alunos que moram em araraquara
    if(strcmp(p1->cidade, "Araraquara")== 0)
        printf("\nAluno (a) %s mora em Araraquara ", p1->nome);
    if(strcmp(p2->cidade, "Araraquara")== 0);
        printf("\nAluno (a) %s mora em Araraquara ", p2->nome);
    if(strcmp(p3->cidade, "Araraquara") == 0);
        printf("\nAluno (a) %s mora em Araraquara ", p3->nome);

    // compara e mostra RA dos alunos com media maior q 7
    if(p1->media > 7)
        printf("\nAluno (a) com RA %s possui media maior q 7,0 ", p1->ra);
    if(p2->media > 7)
        printf("\nAluno (a) com RA %s possui media maior que 7,0 ", p2->ra);
    if(p3->media > 7)
        printf("\nAluno (a) com Ra %s possui media maior que 7,0 ", p3->ra);

    free(p1);
    free(p2);
    free(p3);
}
