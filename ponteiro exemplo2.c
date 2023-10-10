#include<stdio.h>
#include<locale.h> // ponteiros e alocacao dinamica de variaveis

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    int *p;

    printf("Informe os valores de a e b: ");
    scanf("%d%d", &a, &b);
    p = malloc(sizeof(int));
    *p = a;
    a = b;
    b = *p;
    printf("Valor que o ponteiro aponta: %d \n", *p);
    printf("Valor de a = %d e b = %d", a, b);
    free(p);
}
