#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

int idade;

printf("Digite a idade: ");
scanf("%i",&idade);

if (idade >= 5 && idade <= 7){
    printf("Classificação: Infantil A\n");
}
if (idade >= 8 && idade <= 10){
    printf("Classificação: Infantil B\n");
}
if (idade >= 11 && idade <= 13){
    printf("Classificação: Juvenil A\n");
}
if (idade >= 14 && idade <= 17){
    printf("Classificação: Juvenil B\n");
}
if (idade >= 18){
    printf("Classificação: Adulto\n");
}

return 0;
}
