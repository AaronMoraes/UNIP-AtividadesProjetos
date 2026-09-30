#include <stdio.h>
#include <locale.h>
#include <string.h>

struct aluno{
    char nome[50], cidade [30], RA[20];
    float media;
};

int main(){
    struct aluno a1, a2, a3;
    float maior;

// lê os dados dos alunos
//gets só se usa com valores em CHAR(carateres)
printf("\nDigite o nome do aluno: ");
gets(a1.nome);
printf("\nDigite o RA do aluno: ");
gets(a1.RA);
printf("\nDigite a cidade do aluno: ");
gets(a1.cidade);
strlwr(a1.cidade); //strlwr() converte para letras minusculas
printf("\nDigite a media do aluno: ");
scanf("%f ", &a1.media);


//Mostra o nome dos alunos que foram em araraquara
if(strcmp(a1.cidade, "Ararquara")==0)
    printf("\nAluno(a) %s mora em Araraquara", a1.nome);

}
