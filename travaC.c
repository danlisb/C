#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    double valores[100000];
    long int i = 0;
    int *b;

    while(1) {
        valores[i] = 0;
        i++;
        b = &valores[i];
        printf("valores [%d] = %p\n", i, b);
    }

    return 0;
}
