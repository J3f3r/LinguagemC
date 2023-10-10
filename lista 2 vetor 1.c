#include<stdio.h>
#include<locale.h>

void main(){
 setlocale(LC_ALL, "Portuguese");

    int a[8], b[8], aux, i;

    for(i = 0; i < 8; i++){
        printf("Informe um valor A: ");
        scanf("%d", &a[i]);
    }

     for(i = 0; i < 8; i++){
        printf("Informe um valor B: ");
        scanf("%d", &b[i]);
    }

     for(i = 0; i < 8; i++){
        aux = a[i];
        a[i] = b[i];
        b[i] = aux;
    }

    for(i = 0; i < 8; i++)
        printf("Vetor A: %d\n", a[i]);

    for(i = 0; i < 8; i++)
        printf("Vetor B: %d\n", b[i]);

}
