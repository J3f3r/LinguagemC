#include<stdio.h>

void main(){
    int i, n, x, in = 0, out = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
        else
            out++;
    }
    printf("%d in \n", in);
    printf("%d out", out);
}
