#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n_lados, i;
    float lado, perimetro;

    printf("Informe o número de lados do poligono (>2) : ");
    scanf("%d", &n_lados);

    perimetro = 0;
    i = 1;
    while(i <= n_lados){
        printf("Digite o tamanho do lado (cm): ");
        scanf("%f", &lado);
        perimetro = perimetro + lado;
        i++;
    }
    printf("Perimetro do polígono de %d lados: %.2f cm", n_lados ,perimetro);
}
