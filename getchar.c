#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

        int ch;
        printf("Please, input a single character: ");
        ch = getchar();
        putchar(ch);

    return 0;
}
