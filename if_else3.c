int main()
{
    float valor1,valor2, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if(valor2 == 0){
        printf("Erro, Nao existe divisao por zero");
    }else{
       resultado = valor1/valor2;
       printf("O resultado e de: %.2f", resultado);
    }

    return 0;
}
