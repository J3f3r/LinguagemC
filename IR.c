#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Poruguese");

    float salario;

    // tabela de IR: www.debit.com.br/tabelas/tabelas-irrf.php

    printf("Informe o salário: ");
    scanf("%f", &salario);

    if(salario <= 1903.98)
        printf("Isento de IR");
    else if(salario <= 2826.65)
             printf("Alíquota: 7,5%%");
         else if(salario <= 3751.05)
                  printf("Alíquota: 15%%");
              else if(salario <= 4664.68)
                       printf("Alíquiota: 22,5%%");
                   else printf("Alíquota: 27,5%%");
}
