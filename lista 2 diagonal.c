#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[5][5], j, i;
    float soma = 0;
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            printf("informe um numero: ");
            scanf("%d", &mat[j][i]);
        }
    }

    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            if(mat[j] == mat[i])
                soma = soma + mat[j][i];
        }
    }
    printf("\n****Matriz*****\n");// o código abaixo é apenas para mostrar a matriz preenchida na tela
    for(j = 0; j < 5; j++){
        printf("\n");
        for(i = 0; i < 5; i++)
            printf("\t %.2f", soma); // t tabulacao
    }
}
