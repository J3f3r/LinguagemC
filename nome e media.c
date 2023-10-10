#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[100];
    float n1, n2, media;

    printf("Informe o nome do aluno: ");
    gets(nome);
    printf("Informe as notas 1 e 2: ");
    scanf("%f%f", &n1, &n2);
    media = (n1 + n2)/2;
    printf("A média do  aluno %s é: %.2f", nome, media);
}
