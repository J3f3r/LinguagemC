#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Poruguese");

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("O n�mero %d � par", n);
    else{
        printf("O n�mero %d � �mpar", n);
    }

}
