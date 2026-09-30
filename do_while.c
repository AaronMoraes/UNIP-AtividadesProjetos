#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char c;
    int i=0;

    do{
        printf("Digite um caracter: ");
        scanf(" %c", &c);
        i++; //i++ é igual a  i = i +1
    }while(c != '$' && i != 5);

    return 0;
}
