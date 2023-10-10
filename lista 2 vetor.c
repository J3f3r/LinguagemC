#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float ale[10], ing[10], fran[10], soma = 0, maior, menor, mediaA, mediaI, mediaF;
    int i;

    for(i = 0; i < 10; i++){
        printf("Informe uma nota: ");
        scanf("%f", &ale[i]);
        soma = soma + ale[i];
    }
    mediaA = soma / 10;
    printf("Media da turma de Alemao: %.2f\n", mediaA);

    soma = 0;

    for(i = 0; i < 10; i++){
        printf("Informe uma nota: ");
        scanf("%f", &ing[i]);
        soma = soma + ing[i];
    }
    mediaI = soma / 10;
    printf("Media da turma de Ingles: %.2f\n", mediaI);

    soma = 0;

    for(i = 0; i < 10; i++){
        printf("Informe uma nota: ");
        scanf("%f", &fran[i]);
        soma = soma + fran[i];
    }
    mediaF = soma / 10;
    printf("Media da turma de Frances: %.2f\n", mediaF);

    maior = mediaA;
    menor = mediaA;

    if(mediaI > maior)
        maior = mediaA;
    if(mediaI < menor)
        menor = mediaA;

    if(mediaF > maior)
        maior = mediaI;
    if(mediaF < menor)
        menor = mediaI;

    if(mediaA == maior)
        printf("A maior media é da turma de Alemao \n");
    if(mediaI == maior)
        printf("A maior media é da turma de Ingles\n");
    if(mediaF == maior)
        printf("A maior media é da turma de Frances\n");

    if(mediaA == menor)
        printf("A maior media é da turma de Alemao\n");
    if(mediaI == menor)
        printf("A maior media é da turma de Ingles\n");
    if(mediaF == menor)
        printf("A maior media é da turma de Frances\n");
}
