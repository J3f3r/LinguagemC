#include<stdio.h>
#include<locale.h>

typedef struct{
    char nome[30];
    float preco_cerveja, preco_burguer;
}hamburgueria;

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, opcao, tamanho = 0;
    hamburgueria v[15];
    float menor, soma, media;

    do{
       printf("****Menu****\n");
       printf("[1] Cadastrar hamburgueria: \n");
       printf("[2] Encontrar combo hamburguer +  cerveja mais barato: \n");
       printf("[3] Calcular o preco medio do hamburguer na cidade: \n");
       printf("[0] Sair\n");
       printf("Escolha uma opcao");
       scanf("%d", &opcao);

       switch (opcao){
            case 1: if(tamanho == 15) // numero maxumo de hamburgaria
                    printf("\nJa cadastrou o numero maximo de hamburgeria:\n");
                    else{
                        printf("\nInforme o nome da hamburgeria: ");
                        gets(v[tamanho].nome);
                        printf("Informe o velor da cerveja artesanal: R$: ");
                        scanf("%f", &v[tamanho].preco_cerveja);
                        printf("Informe o preço do hamburguer: R$ ");
                        scanf("%f", &v[tamanho].preco_burguer);
                        printf("\nCadastro realizado com sucesso! \a\n");
                        tamanho++;
                    }
                    break;

            case 2: if(tamanho == 0)
                     printf("\nVoce ainda nao cadastrou uma hamburgaria! \n");
                    else{
                     menor = v[0].preco_burguer + v[0].preco_cerveja;
                     for(i = 0; i < tamanho; i++){
                        if(v[i].preco_burguer + v[i].preco_cerveja < menor)
                            menor = v[0].preco_burguer + v[0].preco_cerveja;
                     }
                     printf("\nHmaburgaria com combo hamburguer + cerveja mais baratos: ");
                     for(i = 0; i < tamanho; i++){
                        if(v[i].preco_burguer + v[i].preco_cerveja == menor)
                            printf("%s", v[i].nome); // nome da hamburgaria
                     }
                    }
                    break;

            case 3: if(tamanho == 0)
                    printf("\nVoce ainda nao cadastrou uma hamburgaria! \n");
                    else{
                    soma = 0;
                    for(i = 0; i < tamanho; i++)
                        soma = soma + v[i].preco_burguer;
                    media = soma / tamanho;
                    printf("\nPreco medio do hamburguer na cidade: R$ %.2f", media);
                    }
                    break;

            case 0: printf("\n****Programa finalizado! \n");
                    break;

            default: printf("\nEssa opcao nao existe. escolha uma opcao valida!\n");
       }
       system("pause");
       system("cls");
    }while (opcao != 0);
}
