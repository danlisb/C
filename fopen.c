#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    FILE *fp;

    if ((fp = fopen( "arquivo.txt", "w")) == NULL) {
        printf("N�o foi poss�vel criar o arquivo!\n");
        exit (1);
    }

    return 0;
}
