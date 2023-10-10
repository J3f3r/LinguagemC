#include<stdio.h>
#include<locale.h>

float retornaMaior(float a, float b){
    if(a > b)
        return a;
    else return b;
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y;
    printf("Entre com dois valores reais: \n");
    scanf("%f%f", &x, &y);
    printf("Maior valor: %.2f", retornaMaior(x, y));
}
