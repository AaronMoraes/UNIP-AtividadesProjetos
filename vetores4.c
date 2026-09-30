#include <stdio.h>

void main() {
    int i, vetor[30], posicao;

    i=0;
    do{
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        posicao = i;
        i++;
    }while(vetor[posicao] != 0 && i <10);

    printf("Valores digitados: ");
    for (i=0; i <= posicao; i++){
        printf("%d \n", vetor[i]);
    }
}
