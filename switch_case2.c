#include <stdio.h>
#include <stdlib.h>

int main()
{
int diaDaSemana;
printf("Digite um numero d 1 a 7: ");
scanf("%d" , &diaDaSemana);

switch (diaDaSemana){
    case 1: printf("\nO numero digitado e igual a Domingo\n");
    break;
    case 2: printf("\nO numero digitado e igual a Segunda-Feira\n");
    break;
    case 3: printf("\nO numero digitado e igual a Terça-Feira\n");
    break;
    case 4: printf("\nO numero digitado e igual a Quarta-Feira\n");
    break;
    case 5: printf("\nO numero digitado e igual a Quinta-Feira\n");
    break;
    case 6: printf("\nO numero digitado e igual a Sexta-Feira\n");
    break;
    case 7: printf("\nO numero digitado e igual a Sabado\n");
    break;
    default: printf("\nO numero digitado nao e igual a nenhum dia da semana\n");
}
    return 0;
}
