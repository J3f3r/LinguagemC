#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float vet[5];

    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
    }

    printf("Valores na ordem inversa: \n");

    for(i = 4; i >= 0; i--)
    printf(" %.2f", vet[i]);
}
