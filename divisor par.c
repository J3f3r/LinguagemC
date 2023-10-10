#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;

    for(cont = 0; cont <= 100; cont++){
        if(cont % 2 == 0)
            printf("%d ", cont);
    }

}
