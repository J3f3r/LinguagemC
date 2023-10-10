#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, divisao;

    printf("Digite um número: ");
    scanf("%f", &x);

    printf("Digite outro número: ");
    scanf("%f", &y);

    if(y == 0)
        printf("Não existe divisão por zero, tente novamente!");
    else{
        divisao = x/y;
        printf("Divisão de x por y é %.2f", divisao);
    }

}
