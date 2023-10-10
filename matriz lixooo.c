#include<stdio.h>

void main(){
    int mat[3] [3];
    int maior, j, i;

    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){
            printf("informe um numero: ");
            scanf("%d", &mat[j][i]);
        }
    }

    maior = mat[0] [0];

    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){
            if(mat[j] [i] > maior)
                maior = mat[j][i];
        }
    }
    printf("Maior valor lido: %d", maior);
}
