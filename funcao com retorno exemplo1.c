#include<stdio.h>

float retornaMaior(float a, float b){
    if(a > b)
        return a;
    else return b;
}

void main(){

    float x, y;

    printf("Digite dois valores reais: ");
    scanf("%f%f", &x, &y);
    printf("Maior numero: %.2f", retornaMaior(x, y));
}
