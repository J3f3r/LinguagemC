#include<stdio.h>

void main(){

    int a, b, c;
    scanf("%d", &c); // c recebe o ultimo numero do seu RA

    if(c < 5){
        a = 2;
        b = (c + 5) * a + 2;
    }
    else{
        a = 1;
        b = (c + 3) * a + 5;
    }
     while ( a >= -3){
        b = b + 2;
        printf("%d ", b);
        a--;
     }
}
