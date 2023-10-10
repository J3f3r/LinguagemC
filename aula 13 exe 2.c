#include<stdio.h>

void main(){
    float a, b, *p, *q;

    p = malloc(sizeof(float));
    q = p;
    *q = 0.4;
    a = *p;
    b = 7.1;
    *p = a + b;
    q = &b;
    a = *p + *q;
    printf("%.2f %.2f %.2f %.2f", *p, a, b, *q);
}
