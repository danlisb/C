#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float raio, area;
    const pi = 3.14159265359;

    printf("Escreva o raio do c�rculo: ");
    scanf("%f", &raio);

    area = pi*pow(raio, 2);

    printf("A �rea � %.1f u.a.", area);


    return 0;
}
