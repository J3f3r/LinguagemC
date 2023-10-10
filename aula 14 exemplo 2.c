#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //aumentar ou diminuir a quantidade de memória alocada com a função realloc(ponteiro, quantidade_de_memoria)

    int *p, i;

    p = malloc(100 * sizeof(int));
    for(i = 0; i < 100; i++)
        scanf("%d", (p+i));
    p = realloc(p, 200 * sizeof(int));
    for(i = 100; i < 200; i++)
        scanf("%d", (p+i));
    for(i = 0; i < 200; i++)
        printf("%d \n", *(p+i));
}
