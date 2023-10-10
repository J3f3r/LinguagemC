#include<stdio.h>

void main(){

    int i, j, x, posi_linha, posi_coluna;
    float m[5][5]; // porque a matriz eh de ordem x por x e, x esta entre 1 e 5 entao so para estabelecer tamanho minimo da matriz
    float maior, menor, soma;

    // garantia q o usuario ira digitar um numero ente 1 e 5
    do{
        printf("Informe o valor de x (ordem da matriz) entre 1 e 5:");
        scanf("%d", &x);
    }while (x < 1 || x > 5);

    //leitura dos valores da matria
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("Informe o valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    // achar o maior elemento de cada linha

    for(i = 0; i < x; i++){
        maior = m[i][0];
        for(j = 0; j < 5; j++){
            if(m[i][j] > maior)
            maior = m[i][j];
        }
        printf("Maior elemento da linha %d: %.2f \n", i, maior);
    }

    // soma dos elementos de cada linha
    for(i = 0; i < x; i++){
        soma = 0;
        for(j = 0; j < x; j++){
            soma = soma + m[i][j];
        }
        printf("Soma dos elementos da linha %d: %.2f \n", i, maior);
    }

    // achar a posicao de menor valor da matriz
    menor = m[0][0];
    posi_coluna = 0;
    posi_linha = 0;

    for(i = 0; i < x; i++){
        for(j = 0; j < 5; j++){
            if(m[i][j] < menor){
            menor = m[i][j];
            posi_linha = i;
            posi_coluna = j;
            }
        }
    }
    printf("Posicao de menor elemento da matriz: (%d%d) ", posi_linha, posi_coluna);
}
