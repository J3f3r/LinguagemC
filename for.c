#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Poruguese");

    int contador;
    char c;

    for (contador = 1; contador <= 5; contador++){
        printf("\nDigite o caractere numero %d: ", contador);
        c = getch (); //scanf("%c ", &c);
    }

}
