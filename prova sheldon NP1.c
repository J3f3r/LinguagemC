#include<stdio.h>

void main(){
    int i, n = 6, d = 0;
    float a = 0, b, c, v[6];

    scanf("%f", &c); // ultimo digito do seu RA

    for(i = 0; i < n; i++){
        v[i] = c - i;
        printf("%.2f ", v[i]);
    }

    for(i = 0; i < n; i++)
        a = a + v[i];
    b = a / n;

    for(i = 0; i < n; i++){
        if(v[i] >= b)
        d++;
    }
    printf("%.2f ", b);
    printf("%d ", d);
}
