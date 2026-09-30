#include <stdio.h>
#include <locale.h>

void main(){
    int *x, valor, y;
    valor = 35;
    x = &valor; //atribuir o endereço de valor
    y = *x; //atribuir o conteudo da variavel apontada por X a Y

    printf("Endereco da variavel comum valor: %p\n", &valor);
    printf("Lendo o conteudo do ponteiro X: %p\n", x);
    printf("Endereco da variavel ponteiro X: %p\n", &x);
    printf("Conteudo da variavel apontada por X: %d\n", *x);


}
