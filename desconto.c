#include<stdio.h>
void main(){
    float vm, vd, pd;
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &vm);
    printf("Digite o valor do desconto em %");
    scanf("%f", &vd);
    pd = vm - (vm * vd/100);
    printf("O preco com desconto eh: %.2f", pd);
}
