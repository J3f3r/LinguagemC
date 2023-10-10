#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char c [50];
    int cont;

    for(cont = 1; cont <= 10; cont++)
        printf("Deus maravilhoso\n");
}
