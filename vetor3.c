#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int i, posicao, vet[10];
    i = 0;
    do{
        for(i = 0; i < 10; i++){
            printf("informe um valor: ");
            scanf("%d", &vet[i]);
            posicao = i;
            i++;
        }
    }while(vet[posicao] != 0 && i < 10);

    printf("Valores lidos: \n");
    for(i = 0; i <= posicao; i++)
        printf(" %d ", vet[i]);
}
