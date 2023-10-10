#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguesse");

    int opcao, a, b;
    float soma = 0;

    do{
        printf("*** Menu***\n");
        printf("[1] Olá mundo\n ");
        printf("[2] somar dois numeros\n ");
        printf("[0] sair do programa\n ");
        printf("Escolha uma opção\n ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1: printf("\nOlá mundo!\n");
                    break;
            case 2: printf("digite os dois valores a serem somados: ");
                    scanf("%d%d", &a, &b);
                    printf("Soma: %.d\n", a+b);
                    break;
            case 3: printf("O programa acabou, tchau!");
                    break;

        }
        system("pause"); //ou getch
        system("cls"); //limpa a tela
    }while(opcao != 0);
}
