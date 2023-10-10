#include<stdio.h>
#include<locale.h>

typedef struct{
    char nome[20];
    float altura, idade;
}aluno;

void cadastrarAluno(aluno *p, int n){
    int i;

    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("\nDigite o nome do aluno(a): ");
        gets((p+i)->nome);
        printf("Digite a idade do aluno(a): ");
        scanf("%f", &(p+i)->idade);
        printf("Digite a altura do aluno(a): ");
        scanf("%f", &(p+i)->altura);
    }
}

float calculaMediaAltura(aluno *p, int n){
    int i;
    float soma = 0, media;

    for(i = 0; i < n; i++)
        soma = soma + (p+i)->altura;

    media = soma / n;
    return media;
}

void exibeNomesAltura(aluno *p, int n, float media_altura){
    int i;

    for(i = 0; i < n; i++){
        if((p+i)->altura > media_altura)
            printf("\nAluno %s tem altura maior qua a media \n", (p+i)->nome);
    }
}

int exibeIdadeMaiorQ25(aluno *p, int n){
    int i, cont = 0;

    for(i = 0; i < n; i++){
        if((p+i)->idade > 25)
            cont++;
    }
    return cont;
}

float calculaMediaIdade(aluno *p, int n){
    int i, cont = 0;
    float soma = 0, media;

    for(i = 0; i < n; i++)
        soma = soma + (p+i)->idade;

    media = soma / n;
    return media;
}

int retornaIdadeMenorMedia(aluno *p, int n, float media){
    int i, cont = 0;

    for(i = 0; i < n; i++){
        if((p+i)->idade < media)
            cont++;
    }
    return cont;
}

void exibeAunos(aluno *p, int n, float media_altura){
    int i;

    for(i = 0; i < n; i++){
        if((p+i)->idade < 18 && (p+i)->altura < media_altura)
            printf("\nO aluno %s tem menos de 18 e altura inferior a media \n", (p+i)->nome);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    aluno *p;
    int n, cont;
    float media_altura, media_idade;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    p = malloc(n * sizeof(aluno));
    cadastrarAluno(p, n);

    media_altura = calculaMediaAltura(p, n);
    printf("\nMedia altura: %.2f \n", media_altura);
    exibeNomesAltura(p, n, media_altura);

    cont = exibeIdadeMaiorQ25(p, n);
    printf("\nQuantidade de alunos com idade maior que 25: %d \n", cont);

    media_idade = calculaMediaIdade(p, n);
    cont = retornaIdadeMenorMedia(p, n, media_idade);
    printf("\nQuantidade de alunos com idade inferior a media: %d \n", cont);

    exibeAunos(p, n, media_altura);

    free(p);
}
