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

    printf("o valor de a � %i.\no valor de b � %i.", a, b);




return 0;
}
