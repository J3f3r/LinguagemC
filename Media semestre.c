#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media, exame;

    printf("Nota da prova 1: ");
    scanf("%f", &n1);
    printf("Nota da prova 2: ");
    scanf("%f", &n2);
    printf("Nota da prova 3: ");
    scanf("%f", &n3);
    printf("Nota da prova 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;
    printf("\nMedia: %.2f\n", media);

    if(media >= 7)
        printf("Aprovado");
    else if(media >= 5){
        printf("Ficou de exame!\n");
        exame = 10 - media;
        printf("Nota necessária para passar no exame: %.2f", exame);
        }
        else printf("Reporovado");
    }
