#include <stdio.h>
#include <locale.h>

int main(){
    int i, posicao, tam=5;
    float v[tam], soma=0, media, maior;
//leitura dos valores e calculo da media

    for(i=0;i<tam;i++){
        printf("Informe o valor: ");
        scanf("%f", &v[i]);
        soma = soma + v[i];
    }
    media = soma/tam;
//soma dos elementos maiores que a média
    soma = 0;
    for(i=0;i<tam;i++){
        if(v[i] > media)
            soma = soma + v[i];
    }
    printf("Soma dos elementos maiores que a media: %.2f \n", soma);

//achar o maior valor

    maior = v[0];
    posicao = 0;
    for(i=0; i<tam; i++){
        if(v[i] > maior){
            maior = v[i];
            posicao = i;
        }
        printf("Posicao do elemento de maior valor: %d", posicao);

    }
}
