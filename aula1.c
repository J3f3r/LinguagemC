#include<stdio.h>
void main(){
    int n1, n2, n3, n4;
    float media;
    printf("Digite 4 numeros: ");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
    media = (n1+n2+n3+n4)/4;
    printf("Media: %.2f", media);

}
