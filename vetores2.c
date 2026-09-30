#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;  
    float notas[5];

for (i = 0; i < 5; i++){
        printf("Entre com a nota: ");
        scanf("%f", &notas[i]); 
    }






    return 0;
}
