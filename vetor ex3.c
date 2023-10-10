#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int i, soma = 0, vetor[10];

    for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Soma: %d\n ", soma);

}
