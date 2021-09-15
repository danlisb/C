#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

int inteiro;

printf("Digite um número inteiro: ");
scanf("%i",&inteiro);

if (inteiro %2 == 0){
    printf("É um número par.\n");
}
else{
    printf("É um número ímpar.\n");
}
if (inteiro > 0){
    printf("É um número positivo.\n");
}
if(inteiro < 0){
    printf("É um número negativo.\n");
}
if(inteiro == 0){
    printf("O número é zero.\n");
}

return 0;
}
