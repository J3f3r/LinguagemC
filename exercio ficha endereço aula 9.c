#include<stdio.h>
#include<locale.h>
#include<string.h>

struct tipo_ficha{
char nome[50];
char ra[12];
char cidade[25];
float media;

};
void main(){
    setlocale(LC_ALL, "Portuguese");

    struct tipo_ficha ficha1, ficha2, ficha3;
    float maior;
        //leitura dos dados
        printf("\nInforme seu nome: ");
        gets(ficha1.nome);
        printf("Informe seu RA: ");
        gets(ficha1.ra);
        printf("Informe sua cidade: ");
        gets(ficha1.cidade);
        strlwr(ficha1.cidade);
        printf("Informe sua media: ");
        scanf("%f", &ficha1.media);
        fflush(stdin);

        printf("\nInforme seu nome: ");
        gets(ficha2.nome);
        printf("Informe seu RA: ");
        gets(ficha2.ra);
        printf("Informe sua cidade: ");
        gets(ficha2.cidade);
        strlwr(ficha2.cidade);//converte todos caracteres digitados da cidade para minusculo (caixa baixa)
        printf("Informe sua media: ");
        scanf("%f", &ficha2.media);
        fflush(stdin);//limpa buffer do teclado

        printf("\nInforme seu nome: ");
        gets(ficha3.nome);
        printf("Informe seu RA: ");
        gets(ficha3.ra);
        printf("Informe sua cidade: ");
        gets(ficha3.cidade);
        strlwr(ficha3.cidade);
        printf("Informe sua media: ");
        scanf("%f", &ficha3.media);

    //mostra os alunos que moram em Araraquara
    if(strcmp(ficha1.cidade, "araraquara") == 0)
        printf("O aluno %s mora em Araraquara", ficha1.nome);
    if(strcmp(ficha2.cidade, "araraquara") == 0)
        printf("O aluno %s mora em Araraquara", ficha2.nome);
    if(strcmp(ficha3.cidade, "araraquara") == 0)
        printf("O aluno %s mora em Araraquara", ficha3.nome);

    //encontra a maior media
    maior = ficha1.media;

    if(ficha2.media > maior)
        maior = ficha2.media;
    if(ficha3.media > maior)
        maior = ficha3.media;

    //compara e mostra o RA do aluno com maior media
    if(ficha1.media == maior)
    printf("\nO aluno com RA %s possui a maior media", ficha1.ra);
    if(ficha2.media == maior)
    printf("\nO aluno com RA %s possui a maior media", ficha2.ra);
    if(ficha3.media == maior)
    printf("\nO aluno com RA %s possui a maior media", ficha3.ra);
}
