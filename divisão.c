#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, divisao;

    printf("Digite um n�mero: ");
    scanf("%f", &x);

    printf("Digite outro n�mero: ");
    scanf("%f", &y);

    if(y == 0)
        printf("N�o existe divis�o por zero, tente novamente!");
    else{
        divisao = x/y;
        printf("Divis�o de x por y � %.2f", divisao);
    }

}
