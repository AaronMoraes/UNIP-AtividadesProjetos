#include <stdio.h>
#include <locale.h>

void imprimirTabuada(int numero){

    for(int i=1; i<=10 ;i++) {
        printf("%d x %d = %d\n",numero,i,numero*i);
    }

}



void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    imprimirTabuada(num);

}
