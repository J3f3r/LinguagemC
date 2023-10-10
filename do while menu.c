#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int op;

    do{
        printf("***Menu de frutas***");
        printf("\n[1] para mamão: ");
        printf("\n[2] para morango: ");
        printf("\n[3] para banana: ");
        printf("\nescolha uma opção! ");
        scanf("%d", &op);
    }while(op != 1 && op != 2 && op != 3);

    switch(op){
        case 1: printf("você escolheu mamão\n");
        break;
        case 2: printf("você escolheu morango\n");
        break;
        case 3: printf("você escolheu banana\n");
        break;

    }
}
