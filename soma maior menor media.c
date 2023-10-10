#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;
    float n, soma, media, maior, menor;

    printf("Informe primeiro %dº numero: ", cont);
    scanf("%f", &n);
    maior = n;
    menor = n;
    soma = n;

    for(cont = 2; cont <= 5; cont++){
        printf("Informe %dº numero: ", cont);
        scanf("%f", &n);
        soma = soma + n;
        if(n > maior)
            maior = n;
        if(n < menor)
            menor = n;
    }
    media = soma / 5;
    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
}
