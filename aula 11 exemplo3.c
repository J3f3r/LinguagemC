#include<stdio.h>
#include<locale.h>

void leVetor(float v[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("Informe um valor: ");
        scanf("%f", &v[i]);
    }
}
void exibiVetor(float v[5]){
    int i;
    for(i = 0; i < 5; i++)
        printf("Valor %.2f \n", v[i]);
}
void main(){
    setlocale(LC_ALL, "Portuguese");
    float vetor[5];

    leVetor(vetor);
    exibiVetor(vetor);
}


