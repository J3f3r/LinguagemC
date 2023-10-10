#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, aux;
    printf(" demonstre a troca entre a e b");
    printf("Digite dois valores a e b: ");
    scanf("%d%d", &a, &b);
    aux = a;
    a = b;
    b = aux;
    printf("A troca de a %d e b %d: ", a, b);
}
