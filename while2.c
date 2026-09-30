#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

   int numchar, i;
   char c;

   printf("Informe a quantidade de caracteres serão lidos: ");
   scanf("%d", &numchar);

   i = 1;
   while(i <= numchar){
    printf("Digite um caracter: \n");
    scanf(" %c", &c);
    i++;
   }
}
