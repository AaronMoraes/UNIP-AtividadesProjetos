int main()
{
   float num,soma,media,maior,menor;

   printf("Digite o primeiro numero: ");
   scanf("%f", &num);
   maior = num;
   menor = num;
   soma = num;

   printf("Digite o segundo numero: ");
   scanf("%f", &num);
   if(num > maior){
    maior = num;
   }
   if(num < menor){
    menor = num;
    soma = soma + num;
   }

   printf("Digite o terceiro numero: ");
   scanf("%f", &num);
   if(num > maior){
    maior = num;
   }
   if(num < menor){
    menor = num;
    soma = soma + num;
    media = soma/3;
   }
   printf("\nMaior: %.2f\n", maior);
   printf("\nMenor: %.2f\n", menor);
   printf("\nMedia: %.2f\n", media);
   printf("\nSoma: %.2f\n", soma);

    return 0;
}
