#include<stdio.h>
#include<locale.h>

int calculaFatorial(int x){
    int cont, fat;
    fat = 1;
    for(cont = 1; cont <= x; cont++)
        fat = fat * cont;
    return fat;
}

int calculaSoma(int n){
    int i, soma;
    if(n < 0)
        return 0;
    else{
       soma = 0;
       for(i = 0; i <= n; i++)
          soma = soma + i;
          return soma;
    }
}

void main(){
    int n, soma = 0, fat;

   printf("Digite um valor: ");
   scanf("%d", &n);
   fat = calculaFatorial(n);
   printf("Fatorial de %d: \n", fat);
   soma = calculaSoma(n);
   printf("Soma: %d \n", soma);
}
