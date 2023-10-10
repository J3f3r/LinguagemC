#include<stdio.h>
#include<locale.h>  // ponteiros com vaiacao estatica

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    int *p_int; // ponteiro para int
    b = 5;
    p_int = &a; // ponteiro aponta para o enderço da variavel a;
    *p_int = 3; // valor apontado por p_int recebe 3
    b = b + a;
    printf("Valor que p_int aponta: %d \n", *p_int);
    printf("Endereco que o ponteiro armazana: %x \n", p_int); // hexadecimal
    printf("Valor de a = %d e b = %d", a, b);
}
