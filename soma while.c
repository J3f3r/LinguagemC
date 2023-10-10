#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int cont = 1, soma = 0;
    while(cont <= 100){
        soma = soma + cont;
        printf("%d ", soma);
        cont++;
    }
}
