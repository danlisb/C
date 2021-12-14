#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

    int c;

    for (c = 1; c <= 10; c++){
        printf("7 * %d = %d\n", c, 7*c);
    }

return 0;
}
