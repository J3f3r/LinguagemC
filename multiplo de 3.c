#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;

    for(cont = 0; cont <= 500; cont++)
        if(cont % 3 == 0)
            printf("%d ", cont);
}
