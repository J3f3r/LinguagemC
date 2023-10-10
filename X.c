#include <stdio.h>
void main(){
    int a, b, c, x;
    // x = 2ab+3ac-4bc

    printf("Digte os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    x = 2*a*b+3*a*c-4*b*c;
    printf("O valor de %d eh:", x);
}
