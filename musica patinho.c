#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;

    for(cont = 3; cont > 0; cont--){
    printf("%d patinhos foram passear \n", cont);
    printf("Além das montanhas para brincar \n");
    printf("A mamãe gritou: quá! quá! quá! quá! \n");
    printf("Mas só %d patinhos voltaram de lá\n\n", cont - 1);
    getch();
    }
}
