#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int L, C, soma3 = 0;
    int mat[5][5];

    for (L = 0; L < 5 ; L++){
        for (C = 0; C < 5 ; C++){
            mat [L][C] = 10;
            printf("%i ", mat[L][C]);
        }
        printf("\n");
    }
        for (C = 0; C < 5; C++){
                soma3 += mat[3][C];
        }
        printf("\nSoma da linha 3 da matriz: %i\n", soma3);
    return 0;
    }
