int main()
{
    int num;

printf("Digite um numero de 1 a 10: ");
scanf("%d" , &num);

switch (num){
    case 1: printf("\nO numero digitado e igual a 1");
    break;
    case 2: printf("\nO numero digitado e igual a 2");
    break;
    case 3: printf("\nO numero digitado e igual a 3");
    break;
    case 4: printf("\nO numero digitado e igual a 4");
    break;
    case 5: printf("\nO numero digitado e igual a 5");
    break;
    case 6: printf("\nO numero digitado e igual a 6");
    break;
    case 7: printf("\nO numero digitado e igual a 7");
    break;
    case 8: printf("\nO numero digitado e igual a 8");
    break;
    case 9: printf("\nO numero digitado e igual a 9");
    break;
    case 10: printf("\nO numero digitado e igual a 10");
    break;
    default: printf("O numero digitado nao e nenhum desses");
}
    return 0;
}
