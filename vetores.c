#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float notas[2];

    printf("Digite a primeira nota: ");
    scanf("%f", &notas[0]);
    printf("Digite a segunda nota: ");
    scanf("%f", &notas[1]);
    printf("Digite a terceira nota: ");
    scanf("%f", &notas[2]);
    printf("Primeira nota: %2.f\n", notas[0]);
    printf("Segunda Nota: %2.f\n", notas[1]);
    printf("Terceira Nota: %2.f\n", notas[2]);  



    return 0;
}

