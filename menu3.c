#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguesse");
    int op, cont, fat, b, x;
    float a, n1, n2, n3, soma = 0, maior, result;

    do{
        printf("*** menu\n");
        printf("[1] soma de dois valores: \n");
        printf("[2] maior de tres numeros: \n");
        printf("[3] fatorial de x:\n");
        printf("[4] calcular a^b: \n");
        printf("[0] sair! \n");
        printf("escolha uma opção!");
        scanf("%d", &op);


        switch(op){
            case 1: printf("Digite dois valores: \n");
                    scanf("%f%f", &n1, &n2);
                    printf("Soma: %.2f", n1 + n2);
                    break;

            case 2: printf("Digite um numeros: ");
                    scanf("%f", &a);
                    maior = a;
                    for(cont = 1; cont <= 3; cont++){
                        printf("Digite um numero: ");
                        scanf("%f", &a);
                        if(a > maior)
                        maior = a;
                    }
                    printf("Maior: %.2f \n", maior);
                    break;

            case 3: printf("Digite o valor de x: \n");
                    scanf("%d", &x);
                    fat = 1;
                    for(cont = 1; cont <= x; cont++)
                        fat = fat * cont;
                    printf("Fatorial de %d = %d \n", x, fat);
                    break;

            case 4: printf("\nDigite o valor de 'a' e um valor inteiro para 'b': ");
                    scanf("%f%d", &a, &b);
                    result = 1;
                    for(cont = 1; cont <= b; cont++)
                        result = result * a;
                    printf("Resultado de %.2f elevado a %d = %.2f", a, b, result);
                    break;

            case 0: printf("\nVocê escolheu sair, programa finalizado! ");
                    break;

            default:printf("\nEssa opção não existe, tente novamente! ");

        }
        system("pause");
        system("cls");

    }while(op != 0);
}

//            cas2 2:
 //                   printf("Digite tres numeros: \n");
 //                   scanf("%f%f%f", &n1, &n2, &n3);
 //                   maior = n1;
 //                   if(n1 > n2 && n1 > n3)
 //                       maior = n1;
 //                   else if(n2 > n1 && n2 > n3)
 //                           maior = n2;
 //                        else
 //                           maior = n3;
 //                   printf("Maior: %.2f", maior);





