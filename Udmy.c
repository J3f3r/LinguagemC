#include<stdio.h>

void main(){

    int cod, qntdd;
    float p1, p2, p3, p4, p5, total = 0;

    p1 = 4;
    p2 = 4.5;
    p3 = 5;
    p4 = 2;
    p5 = 1.5;

    scanf("%d%d", &cod, &qntdd);
    if(cod == 1)
        total = qntdd * p1;

    if(cod == 2)
        total = qntdd * p2;

    if(cod == 3)
        total = qntdd * p3;

    if(cod == 4)
        total = qntdd * p4;

    if(cod == 5)
        total = qntdd * p5;

    printf("\nTotal: R$ %.2f", total);
}
