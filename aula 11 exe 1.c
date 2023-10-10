#include<stdio.h>
#include<locale.h>

void calculaMedia(){
    int i, n;
    float soma = 0, valor, media;

    printf("Digite a quantidade de valores \n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);
        soma = soma + valor;
    }
    media = soma / n;
    printf("Media: %.2f \n", media);
}

void calculaAreaCubo(float lado){
    float area;
    area = 6 * lado * lado;
    printf("\nArea do cubo: %.2f \n", area);
}

void calculaFatorial(int n){
    int cont, fat;
    fat = 1;
    for(cont = 1; cont <= n; cont++)
        fat = fat * cont;
    printf("Fatorial de %d = %d \n", n, fat);
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n, opcao;
    float lado;

    do{
        printf("**********Menu***********\n");
        printf("[1] Media de N valores: \n");
        printf("[2] Area do cubo: \n");
        printf("[3] Fatorial de N: \n");
        printf("[0] Sair: \n");
        printf("Escolha uma opcao! \n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: calculaMedia();
                    break;

            case 2: printf("\nDigite o valor da aresta (lado) do cubo: ");
                    scanf("%f", &lado);
                    calculaAreaCubo(lado);
                    break;

            case 3: printf("\nDigite o numero: ");
                    scanf("%d", &n);
                    calculaFatorial(n);
                    break;

            case 0: printf("n\Programa finalizado! \n\a "); // \a emite um audio
                    break;

            default: printf("\nOpcao invalida, tente novamente! \n");
        }
        system("pause");
        system("cls");
    }while (opcao != 0);
}
