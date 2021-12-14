#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

    int c;

    for (c = 1; c <= 100; c++){
        printf("%d\n", c);
    }

return 0;
}
