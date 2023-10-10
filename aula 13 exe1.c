#include<stdio.h>

void main(){
    int a, b, c;
    int *p, *q, *r;

    a = 3;
    p = &a;
    q = p;
    c = 4;
    r = &b;
    *r = *p + *q;
    *p = 4;
    *q = 6;
    printf("%d%d%d", a, b, c);
}
