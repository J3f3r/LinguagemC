#include<stdio.h>
#include<locale.h>

void calculaMedia(float x, float y, float z);

void main(){
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, x, y, z;

    printf("Entre com 3 numeros: \n");
    scanf("%f%f%f", &a, &b, &c);
    calculaMedia(a, b, c);

    printf("Enre com mais 3 numeros: \n");
    scanf("%f%f%f", &x, &y, &z);
    calculaMedia(x, y, z);
    calculaMedia(a, x, b);
}
// tem que declarar
void calculaMedia(float x, float y, float z){
    float media;
    media = (x + y + z) / 3;
    printf("Media: %.2f \n", media);
}
