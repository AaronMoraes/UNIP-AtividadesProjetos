#include <stdio.h>
#include <locale.h>

int main(){

int *p; /*utiliza-se *ponteiro para saber o valor que ele aponta*/
int a;
a = 9;
p = &a;
printf("%d", *p);


}