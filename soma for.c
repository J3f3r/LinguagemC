#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont, soma = 0;

    for(cont = 0; cont <= 100; cont++)
        soma = soma + cont;
    printf("Soma: %d", soma);

}
