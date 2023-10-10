#include<stdio.h>

void main(){

    int i, qntd_menores;
    float soma = 0, media, maior;
    float notas[5];

    for(i = 0; i < 5; i++){
        printf("Informe a nota: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 5;
    maior = notas[i];
    qntd_menores = 0;
    for(i = 0; i < 5; i++){
        if(notas[i] > maior)
            maior = notas[i];
        if(notas[i] < media)
            qntd_menores++;
    }

    printf("Maior nota: %.2f \n", maior);
    printf("Media das notas da turma: %.2f\n", media);
    printf("Quantidade de notas menores que a media: %d", qntd_menores);
}
