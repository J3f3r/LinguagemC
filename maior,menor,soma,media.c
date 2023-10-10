#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float maior, menor, media, soma, n;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n);
    maior = n;
    menor = n;
    soma = n;

    printf("Digite o segundo numero: ");
    scanf("%f", &n);
    if(n > maior)
        maior = n;
    if(n < menor)
        menor = n;
    soma = soma + n;

    printf("Digite o terceiro numero: ");
    scanf("%f", &n);
    if(n > maior)
        maior = n;
    if(n < menor)
        menor = n;
    soma = soma + n;

    printf("Digite o quarto numero: ");
    scanf("%f", &n);
    if(n > maior)
        maior = n;
    if(n < menor)
        menor = n;
    soma = soma + n;

    printf("Digite o quinto numero: ");
    scanf("%f", &n);
    if(n > maior)
        maior = n;
    if(n < menor)
        menor = n;
    soma = soma + n;
    media = soma/5;

    printf("maior = %.2f\n", maior);
    printf("menor = %.2f\n", menor);
    printf("soma = %.2f\n", soma);
    printf("media = %.2f\n", media);


}
