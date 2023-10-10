#include<stdio.h>
#include<locale.h>
#include<string.h>

typedef struct{
    char nome[10], ra[10];
    float media;
} tipo_aluno;

void main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_aluno v[5];
    int i;
    float maior, menor;

    for(i = 0; i < 5; i++){
        printf("\nInforme seu nome: ");
        gets(v[i].nome);
        printf("Informe seu RA: ");
        gets(v[i].ra);
        printf("Informe sua media: ");
        scanf("%f", &v[i].media);
        fflush(stdin); //limpar buffer do teclado
    }

    maior = v[0].media;
    menor = v[0].media;

    for(i = 0; i < 5; i++){// um vetor para atribuir maior e menor
        if(v[i].media > maior)
            maior = v[i].media;
        if(v[i].media < menor)
            menor = v[i].media;
    }
    for(i = 0; i < 5; i++){// outro para comparar cada posicao com o maior e o menor para printar
        if(v[i].media == maior)
        printf("O aluno(a) %s tem a maior media\n", v[i].nome);//\n para proxima resposta na linha de baixo
        if(v[i].media == menor)
        printf("O aluno(a) %s tem a menor media", v[i].ra);
    }
}
