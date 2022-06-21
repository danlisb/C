#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    FILE * arquivo;
    int i, q;

    arquivo=fopen("questao01in.txt", "w");

    q=0;
    while (fscanf(arquivo, "%d", &i) == 1) {
        q++;
        printf("%d", i);
    }
    printf("\nTotal: %d\n", q);
    fclose(arquivo);

    return 0;
}
