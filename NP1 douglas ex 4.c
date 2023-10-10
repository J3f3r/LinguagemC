#include<stdio.h>

void main(){

    int x, y;
    scanf("%d", &y); // y recebe o ultimo numero do seu RA
    y = y - 2;

    for(x = 0; x < y; x++)
        printf("%d ", x);

    while(x >= y){
        printf("%d ", x);
        y = y + 2;
    }
    x = 10;

    do{
        printf("%d ", x);
        x--;
    }while (x > y);
}
