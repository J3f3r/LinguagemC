#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    char nome[30], cpf[12], sexo;
    int idade;
    float salario;
}funcionario;

void cadastraDados(funcionario *p, int n){
    int i;

    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("\nDigite o nome do funcionario: ");
        gets((p+i)->nome);
        printf("\nDigite o cpf (somente numeros): ");
        gets((p+i)->cpf);
        printf("\nDigite a idade: ");
        scanf("%d", &(p+i)->idade);
        printf("\nDigite o sexo (M ou F): ");
        (p+i)->sexo = getche();
        printf("\n\nDigite o salario: R$");
        scanf("%f", &(p+i)->salario);
    }
    printf("\nDados cadastrados com sucesso! \n\n");
    system("pause");
    system("cls");
}

void buscaCpf(funcionario *p, int n){
    int i;
    char cpf[12];
    bool achou = false;

    fflush(stdin);
    printf("Informe o CPF que deseja encontrar: \n");
    gets(cpf); //porque nao esta dentro da struct

    for(i = 0; i < n && achou == false; i++){
        if(strcmp(cpf, (p+i)->cpf) == 0){ //compara cpf digitado com o cadastrado se a comparacao iguala 0 verdadeiro
            achou = true;
            printf("%s \n", (p+i)->cpf);
            printf("%s \n", (p+i)->nome);
            printf("%c \n", (p+i)->sexo);
            printf("%d \n", (p+i)->idade);
            printf("%.2f \n\n", (p+i)->salario);
        }
        if(achou == false)
            printf("\nCPF  %s nao encontrado, informe um CPF valido! \n", cpf);
    }
}

float calculaMediaSalario(funcionario *p, int n){
    int i;
    float soma = 0; //pode ser tambem colocando media e retornado a media

    for(i = 0; i < n; i++)
        soma = soma + (p+i)->salario;
    return soma / n;
}

void exibeFuncionarioSalAcimaMedia(funcionario *p, int n){
    int i;
    float media = calculaMediaSalario(p, n);

    printf("******Lista de funcionarios com salario maior que media salarial da empresa: \n");
    for(i = 0; i < n; i++){
        if((p+i)->salario > media){
            printf("%s \n", (p+i)->cpf);
            printf("%s \n", (p+i)->nome);
            printf("%c \n", (p+i)->sexo);
            printf("%d \n", (p+i)->idade);
            printf("%.2f \n\n", (p+i)->salario);
        }
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    funcionario *p;
    int n, op;

    printf("\nQuantos funcionarios deseja cadastrar: ");
    scanf("%d", &n);

    p = malloc(n * sizeof(funcionario));
    cadastraDados(p, n);

    do{
        printf("*****Menu******\n");
        printf("[1] Busca funcionario pelo CPF: \n");
        printf("[2] Exibe lista de funcionarios com salario maior que a media: \n");
        printf("[3] Sair do programa: \n");
        printf("Escolha uma opcao");
        scanf("%d", &op);

        switch(op){
                case 1: buscaCpf(p, n);
                break;

                case 2: exibeFuncionarioSalAcimaMedia(p, n);
                break;

                case 3: printf("\nPrograma finalizado! \n\n");
                break;

                default: printf("\nEssa opcao nao existe, digite uma opcao valida! \n\n");
        }
        system("pause");
        system("cls");

    }while(op != 0);

    free(p);
}
