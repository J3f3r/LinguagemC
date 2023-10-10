#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, n1 = 1, n2, n3, n4 = 6;

    scanf("%d ", &n2);  // ultimo digito do seu RA

    if(n2 >= 6){
        n1 = 3;
        n2 = 10 - n2;
    }
    for(i = 1; i < n4; i++){
        n3 = n1 + n2 + i;
        n1 = n2 - 5;
        n2 = n3;
        printf("%d ", n3);
    }
}
