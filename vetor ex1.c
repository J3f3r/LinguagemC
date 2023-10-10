#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, qntd_menores = 0;
    float soma = 0, media;
    float notas[5];

    for(i = 0; i < 5; i++){
        printf("Informe a nota: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 5;

    for(i = 0; i < 5; i++){
        if(notas[i] < media)
            qntd_menores++;
    }
    printf("Media: %.2f \n", media);
    printf("Quantidade menor que a media: %d", qntd_menores);
}
