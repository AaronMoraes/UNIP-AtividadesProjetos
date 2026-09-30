#include <stdio.h>
#include <stdlib.h>

void calcularmedia(int,n) {
    float valor, media, soma = 0
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o valor: ");
        scanf("%f", &valor);
        soma += valor;
    }
    media = soma / n;
    printf("\n Média: %.2f\n", media);
}

void calculaareacubo(float lado) {
    float area;
    area = lado * lado * 6;
    printf("Area do cubo: %.2f\n", area);
}

void calcularfatorial(int n) {
    int cont, fat = 1;
    for (cont = 1; cont <= n; cont++) {
        fat *= cont;
    }
    printf("Fatorial de %d = %d \n", n, fat);
}

int main() {
    int opcao, n, qtde;
    float lado;

    do {
        printf("\n**** MENU ****\n");
        printf("\n[1] Média de N valores \n");
        printf("\n[2] Área do cubo \n");   
        printf("\n[3] Fatorial de um número \n"); 
        printf("\n[0] Sair \n");  
        scanf("%d", %opcao);
        
        
        switch(opcao) {
            case 1: 
            printf("Digite a quantidade de valores: ");
            scanf("%d", &qtde);
            calcularmedia(qtde);
            break;

            case 2:
            printf("Digite o valor da aresta: ");
            scanf("%f", &lado);
            calculaareacubo(lado):
            break;

            case 3:
            printf("Digite o número: ");
            scanf("%d", &n);
            calcularfatorial(n);
            break;

            case 0:
            printf("Programa Finalizado. \a \n");
            break;

            default:
            printf("Opção invalida! \n");
        }
    } while (opcao != 0);

    return 0;
}
