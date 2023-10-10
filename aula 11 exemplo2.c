#include<stdio.h>
#include<locale.h>

void trocarNumeroPorValores(int n1, int n2){
    int aux;

    aux = n1;
    n1 = n2;
    n2 = aux;
    printf("Valor de n1 dentro da funcao: %d\n", n1);
    printf("Valor de n2 dentro da funcao: %d\n", n2);
}

void trocarNumeroPorReferencia(int *n1, int *n2){
    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
    printf("Valor de n1 dentro da funcao: %d\n", *n1);
    printf("Valor de n2 dentro da funcao: %d\n", *n2);
}

void main(){
     setlocale(LC_ALL, "Portuguese");
     int n1, n2;

     printf("Digite 2 numeros: ");
     scanf("%d%d", &n1, &n2);

     printf("\n\n*******Passagem de parametro por valor********\n");
     trocarNumeroPorValores(n1, n2);
     printf("Valor de n1 dentro do main(): %d\n", n1);
     printf("Valor de n2 dentro do main(): %d\n", n2);

     printf("\n\n*******Passagem de parametro por referencia*****\n");
     trocarNumeroPorReferencia(&n1, &n2);
     printf("Valor de n1 dentro do main(): %d\n", n1);
     printf("Valor de n2 dentro do main(): %d\n", n2);
}
