#include <stdio.h>
#include <locale.h>
#include <string.h>

struct calculadora{
    float a,b;
    char operacao;

};

int main(){
    struct calculadora calc;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &calc.a);
    printf("Digite a operacao(+,-,*,/): ");
    scanf(" %c", &calc.operacao);
    printf("Digite o segundo numero: ");
    scanf("%f", &calc.b);

    switch(calc.operacao){
    case '+':
        resultado = calc.a+calc.b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '-':
        resultado = calc.a - calc.b;
        printf("Resultado: %.2f\n",resultado);
        break;
    case '*':
        resultado = calc.a * calc.b;
        printf("Resultado: %.2f\n",resultado);
        break;
    case '/':
        if(calc.b != 0) {
            resultado = calc.a / calc.b;
            printf("Resultado: %.2f\n",resultado);
        }
        else{
            printf("Erro divisao por zero\n");
        }
        break;
    default:
        printf("Operacao Invalida\n");

    }

}
