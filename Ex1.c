#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    int b, h, area;

    printf("Digite o valor da base: ");
    scanf("%d", &b);

    printf("Digite o valor da altura: ");
    scanf("%d", &h);

    area = b * h;

    printf("O valor da área é: %d", area);

return 0;
}
