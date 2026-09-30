int main(){
    setlocale(LC_ALL, "Portuguese");

    char c;
    int i;

    for(i = 1; i <= 5; i++){
        printf("\nDigite o caractere numero %d: ", i);
        scanf(" %c", &c); 
    }

    return 0;
}