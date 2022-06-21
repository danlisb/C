#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main ()
{
    int a, b, sum;

    printf("Digite o valor do numero a: ");
    scanf("%i", &a);

    printf("Digite o valor do numero b: ");
    scanf("%i", &b);

    sum = a+b;

    printf("A soma dos dois numeros eh: %i", sum);

    return 0;
}
