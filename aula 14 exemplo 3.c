#include<stdio.h>

typedef struct{
    char nome[30];
    float nota;
} aluno;

void leVetor(aluno *p, int n){
    int i;
    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("\nInforme o nome: ");
        gets((p+i)->nome);
        printf("Informe a nota:");
        scanf("%f", &(p+i)->nota);
    }
}

void exibeVetor(aluno *p, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nNome: %s \n", (p+i)->nome);
        printf("Nota: %.2f \n", (p+i)->nota);
    }
}

void main(){
    aluno *p;
    int n;

    printf("\nInforme a quantidade de aluno: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(aluno));
    leVetor(p, n);
    exibeVetor(p, n);
    free(p);
}
