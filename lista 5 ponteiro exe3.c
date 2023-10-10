#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
   char cpf[12], nome[20], sexo;
   int idade;
   float salario;
}funcionario;

void cadastroFuncionario(funcionario *p, int n){
    int i;


    for(i = 0; i < n; i++){
    fflush(stdin);
    printf("\nInforme o CPF: \n" );
    gets((p+i)->cpf);
    printf("informe o nome do funcionario: ");
    gets((p+i)->nome);
    printf("Digite a idade: ");
    scanf("%d", &(p+i)->idade);
    printf("Informe o sexo (S ou M): ");
    (p+i)->sexo = getche();
    printf("informe o salario: R$ ");
    scanf("%f", &(p+i)->salario);
    }
    printf("\nDados cadastrado com sucesso! \n\n");
    system("pause");
    system("cls");
}


void buscaCpf(funcionario *p, int n){
    char cpf[11];
    int i;
    bool achou = false;

    fflush(stdin);
    printf("Informe o CPF que deseja buscar (somente numeros): \n");
    gets(cpf);

    for(i = 0; i < n && achou == false; i++){
        if(strcmp(cpf, (p+i)->cpf) == 0){
           achou = true;
           printf("\nCPF: %s \n", (p+i)->cpf);
           printf("\nNome: %s \n", (p+i)->nome);
           printf("\nIdade: %d \n", (p+i)->idade);
           printf("\nSexo: %c \n", (p+i)->sexo);
           printf("\nSalario: %.2f \n", (p+i)->salario);
        }
    }
    if(achou == false)
        printf("\nCPF nao encontrado, informe um CPF valido! \n\n", cpf);
}

float calculaMediaSalario(funcionario *p, int n){
    int i;
    float soma = 0;

    for(i = 0; i < n; i++)
        soma = soma + (p+i)->salario;

    return soma / n;
}

void exibeFuncionarioSalarioAcimaMedia(funcionario *p, int n){
    int i;
    float media;
    media = calculaMediaSalario(p, n);

    printf("\n****Lista de funcionarios com salario maior qua a media salarial %.2f****\n", media);
    for(i = 0; i < n; i++){
        if((p+i)->salario > media){
            printf("\nCPF: %s \n", (p+i)->cpf);
            printf("\nNome: %s \n", (p+i)->nome);
            printf("\nIdade: %d \n", (p+i)->idade);
            printf("\nSexo: %c \n", (p+i)->sexo);
            printf("\nSalario: %.2f \n\n", (p+i)->salario);
        }
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    funcionario *p;
    int n, opcao;

    printf("\Informe a quantidade de alunos que deseja cadastrar? ");
    scanf("%d", &n);

    p = malloc(n * sizeof(funcionario));
    cadastroFuncionario(p, n);

    do{
        printf("\n*****Menu*****\n");
        printf("[1] Buscar funcionario pelo CPF e exibe dados: \n");
        printf("[2] Exibe lista de funcionarios com salario maior que a media: \n");
        printf("[0] Sair: \n");
        printf("Escolha uma opcao! ");
        scanf("%d", &opcao);
        switch(opcao){
                case 1: buscaCpf(p, n);
                break;
                case 2: exibeFuncionarioSalarioAcimaMedia(p, n);
                break;
                case 0: printf("Busca finalizada! ");
                break;
                default: printf("Opcao invalida, tente novamente!");
        }
        system("pause");
        system("cls");

    }while(opcao != 0);

    free(p);

}
