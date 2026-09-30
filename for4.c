#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n, soma, media, maior, menor;
    int i = 1;

    printf("Informe o %d numero: ", i);
    scanf("%f", &n);
    maior = n;
    menor = n;
    soma = n;

    for(i = 2; i <= 10; i++){
        printf("Informe o %d número: ", i);
    scanf("%f", &n);
    soma = soma + n;
    if (n > maior)
        maior = n;
    if (n < menor)
        menor = n;
    }

    media = soma/10;
    printf("Soma: %.2f \n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
}
