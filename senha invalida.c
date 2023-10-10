#include<stdio.h>

void main(){

    int n;

    scanf("%d", &n);
    while(n != 2002){
        printf("Senha Invlaida! \n");
        scanf("%d", &n);
    }
    printf("Acesso permitido! ");
}
