#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
m�s com 30 dias.*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    int anos, meses, dias, idade;

    printf("Insira quantos anos: ");
    scanf("%d", &anos);

    printf("Insira quantos meses: ");
    scanf("%d", &meses);

    printf("Insira quantos dias: ");
    scanf("%d", &dias);

    idade = (anos*365)+(meses*30)+(dias);

    printf("A idade em dias �: %d", idade);

return 0;
}
