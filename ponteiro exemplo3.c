#include<stdio.h>
#include<locale.h> //

typedef struct{
    int idade;
    char nome[30];
}registro;

void main(){
    setlocale(LC_ALL, "Portuguese");
    registro *p, *q;
    p = malloc(sizeof(registro));
    printf("Digite o nome: ");
    gets(p ->nome);
    printf("Digite a idade: ");
    scanf("%d", &p ->idade);

    printf("Nome: %s \n", p ->nome);
    printf("Idade: %d \n", p ->idade);
    q = p;
    p ->idade = 20;
    printf("Nova idade: %d", p ->idade);
    free(p);
}
