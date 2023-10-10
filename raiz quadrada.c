#include<stdio.h>
#include<math.h>

void main(){
    double delta, raiz_quadrada;
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    raiz_quadrada = sqrt(delta);
    printf("%lf", raiz_quadrada);
}
