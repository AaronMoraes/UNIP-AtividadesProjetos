#include <stdio.h>
#include <locale.h>

void main(){
    int a, b;
    int *p;
    printf("Informe os valores de a e b: ");
    scanf("%d%d", &a, &b);
    p = malloc(sizeof(int)); //Função para saber a quantidade de memória utilizada
    *p = a;
    a = b;
    b = *p;
    printf("Valor que o ponteiro aponta = %d \n", *p);
    printf("Valor de a = %d e valor de b = %d \n", a, b);
    free(p); /*Função para liberar(destruir) a variável criada e só pode usa-la se o ponteiro estiver apontando 
    para uma variável criada utilizando a função malloc*/
    



}
