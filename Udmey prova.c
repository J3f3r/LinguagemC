#include<stdio.h>

void main(){

    int cod, n1, n2;
    float p1, p2, t1, t2, valor;

    scanf("%d%d%f \n", &cod, &n1, p1);
    scanf("%d%d%f", &cod, &n2, p2);

    t1 = n1 * p1;
    t2 = n2 * p2;
    valor = t1 + t2;

    printf("%.2f", valor);
}
