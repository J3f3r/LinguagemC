#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;

    for(cont = 3; cont > 0; cont--){
    printf("%d patinhos foram passear \n", cont);
    printf("Al�m das montanhas para brincar \n");
    printf("A mam�e gritou: qu�! qu�! qu�! qu�! \n");
    printf("Mas s� %d patinhos voltaram de l�\n\n", cont - 1);
    getch();
    }
}
