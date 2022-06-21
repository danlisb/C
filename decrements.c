#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a, b;
    a = 5;
    b = --a;

    printf("o valor de a é %i.\no valor de b é %i.", a, b);




return 0;
}
