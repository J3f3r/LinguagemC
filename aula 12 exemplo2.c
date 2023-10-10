#include<stdio.h>
#include<locale.h>
#include"funcao.h"

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(par(num) == 0)
        printf("%d eh par", num);
    esle
        printf("%d eh impar", num);
}

