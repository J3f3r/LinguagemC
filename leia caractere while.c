#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char ch;
    int cont, n;
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n > 0){
        n = n - 1;
        printf("\n%c ", ch);
        cont--;
    }
}
