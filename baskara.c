#include<stdio.h>
#include<math.h>

void main(){

    double delta;
    float a, b, c, x1, x2;

    scanf("%f%f%f", &a, &b, &c);

    if(a == 0)
        printf("\nImpossivel calcular! ");
    else{
        delta = b * b - 4 * a * c;
        if(delta < 0)
            printf("\nImpossivel calcular! ");
        else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        }
    }

    printf("X1 = %.5lf \n", x1);
    printf("X2 = %.5lf \n", x2);
}
