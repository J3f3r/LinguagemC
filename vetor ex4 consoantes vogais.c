#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[100];
    int qntd_c = 0, qntd_v = 0, i, tam;

    printf("Digite uma palavra: ");
    gets(palavra);
    tam = strlen(palavra); //retorna a quantidade de caractere da string "palavra"
    strlwr(palavra); // strlwr() converte todo caractere da string (palavra) para minusculas, assim a comparação dentro do for fica mais precisa

    for(i = 0; i < tam; i++){
        if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u'))
            qntd_v++;
        else if((palavra[i] == 'b') || (palavra[i] == 'c') || (palavra[i] == 'd') || (palavra[i] == 'f') || (palavra[i] == 'g') || (palavra[i] == 'h') || (palavra[i] == 'j') || (palavra[i] == 'k') || (palavra[i] == 'l') || (palavra[i] == 'm') || (palavra[i] == 'n') || (palavra[i] == 'p') || (palavra[i] == 'q') || (palavra[i] == 'r') || (palavra[i] == 's') || (palavra[i] == 't') || (palavra[i] == 'v') || (palavra[i] == 'w') || (palavra[i] == 'x') || (palavra[i] == 'y') || (palavra[i] == 'z'))
            qntd_c++;
        }
    printf("Quantidade de vogais: %d \n", qntd_v);
    printf("Quantidade de vogais: %d \n", qntd_c);
}
