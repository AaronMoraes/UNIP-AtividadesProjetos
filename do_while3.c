#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, soma=0;
    int opcao;

    do{
        printf("***Menu de Opções***\n");
        printf("[0] Sair.\n");
        printf("[1] Soma de dois números.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 0: printf("Saindo do programa...\n");
            break;
            case 1: printf("Digite dois números separados por um espaço: ");
                        scanf("%f %f", &n1, &n2);
                        soma = n1 + n2;
                        printf("Soma: %.2f", soma);
                        break;
            default: printf("Opção Inválida");



        }


    }while(opcao != 0);

    return 0;
}
