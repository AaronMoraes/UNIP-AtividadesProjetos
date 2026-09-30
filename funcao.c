#include <stdio.h>
#include <locale.h>

void saudacao(char nome[]){
    printf("Ola, %s!Como voce esta?",nome);
}



void main(){
    char nome_pessoa[50];
    printf("Qual eh o seu nome?\n");
    gets(nome_pessoa);
    saudacao(nome_pessoa);


}
