#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float c, f;

    printf("Escreva a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5*f-160)/9;

    printf("A temperatura em Celsius é %.1f.", c);


    return 0;
}
