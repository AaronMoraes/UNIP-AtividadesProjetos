#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, pares;

    for(i = 1; i <= 100; i++)
    if(i % 2 == 0){
        printf("%d \n", i);
    }

}
