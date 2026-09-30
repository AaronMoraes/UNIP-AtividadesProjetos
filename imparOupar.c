int main()
{
    int num;

    printf("Digite o numero desejado: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Esse numero e par");
    }else{
        printf("Esse numero e impar");
    }

    return 0;
}
