#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular
e escrever a �rea do ret�ngulo*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    int b, h, area;

    printf("Digite o valor da base: ");
    scanf("%d", &b);

    printf("Digite o valor da altura: ");
    scanf("%d", &h);

    area = b*h;

    printf("O valor da �rea �: %d", area);

return 0;
}
