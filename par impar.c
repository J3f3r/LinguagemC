#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Poruguese");

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("O número %d é par", n);
    else{
        printf("O número %d é ímpar", n);
    }

}
