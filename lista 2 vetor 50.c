#include<stdio.h>
#include<locale.h>

void main(){
 setlocale(LC_ALL, "Portuguese");

 int i, tamanho[50], posicao;
 float vet[tamanho], soma = 0, media, maior;

     //leitura e calculo da media
     for(i = 0; i < tamanho; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
     }

     media = soma / 50;

     // soma dos elementos maiores q a media
     soma = 0;
     for(i = 0; i < tamanho; i++){
        if(vet[i] > media)
        soma = soma + vet[i];
     }

     // achar o maior valor
     posicao = 0;
     maior = [0];
     for(i = 0; i < tamanho; i++){
        if(vet[i] > maior)
            maior = vet[i];
            posicao = i;
     }
     printf("Soma dos elementos maiores que a media: %.2f\n", soma);
     printf("Poisicao do maior elemento : %d", posicao);
 }

