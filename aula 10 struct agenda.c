#include<stdio.h>
#include<locale.h>
#include<ctype.h>

typedef struct{
    char nome[20], endereco[50], telefone[15], email[25];
} agenda;

void main(){
    setlocale(LC_ALL, "Portuguese");

    agenda v[100];
    int i = 0, tam = 100;
    char resposta;

    // cadastrar clientes
    do{
        printf("Digite seu nome: \n");
        gets(v[i].nome);
        printf("Digite seu endereco: \n");
        gets(v[i].endereco);
        printf("Digite seu telefone: \n");
        gets(v[i].telefone);
        printf("Digeite seu email: \n");
        gets(v[i].email);
        printf("deseja fazer outro cadasro s/n ?: ");
        resposta = getche();
        resposta = tolower(resposta); // converte a resposta do usuario para um caractere minusculo
        printf("\n\n");
        i++;
    }while (resposta == 's' && i < tam);

    if(i == 100){
        printf("Agenda lotada! \n");
        system("pause"); // aguardando o ususario digitar qualquer tecla
    }

    // exibindo todos os dados na tela

    printf("Exibir todos os dados na tela: \n");

    for(i = 0; i < tam; i++){
       printf("%s", v[i].nome);
       printf("%s", v[i].endereco);
       printf("%s", v[i].telefone);
       printf("%s", v[i].email);
    }

}
