#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

   int matriz [3][3] = {{1,2,3}, {4,5}, {6}};
   int i,j;

   for (i = 0; i < 3; i ++){
    for (j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
   }

    return 0;
}
