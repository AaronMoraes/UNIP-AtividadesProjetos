#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    int *p_int; //ponteiro para int
    b = 5;
    p_int = &a; //p_int aponta para endereço da variavel A
    *p_int = 3; //valor apontado para p_int recebe 3
    b = b + a;
    printf("Valor que o ponteiro aponta: %d \n", *p_int);
    printf("Endereço que o ponteiro armazena: %x \n", p_int); //Hexadecimal (%x)
    printf("Valor de a = %d e b = %d \n", a, b);



}