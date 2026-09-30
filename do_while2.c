#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, soma=0 , qtd=0;

    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        soma = soma + n;
        qtd++;
    }while(n > 0);

    printf("Quantidade de números digitados: %d \n", qtd);
    printf("Soma dos números: %d", soma);

    return 0;
}
