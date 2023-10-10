#include <stdio.h>
int main(){
    float area, base, altura;
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    area = base * altura / 2;
    printf("Area do triangulo eh: %.2f", area);

return 0;
}
