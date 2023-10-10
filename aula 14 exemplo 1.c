#include<stdio.h>
#include<locale.h> //  alocação dinâmica de vetores para casos em o tamanho do vetor supere a memoria diponivel

void main(){
    setlocale(LC_ALL, "Portuguese");

    int *p, i, tam;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    p = malloc(tam * sizeof(int)); // alocacao de memoria para o vetor

    if(!p) // equivale ao comando if(p == null)
        printf("Erro: memoria insuficiente para alocacao! ");
    else{
        for(i = 0; i < tam; i++){
            printf("Informe o valor: ");
            scanf("%d", (p+i));
        }
        for(i = 0; i < tam; i++)
            printf("Valor da posicao %d : %d \n", i, *(p+i));

        free(p);
    }
}
