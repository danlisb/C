#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int L, C;
    int mat[3][3];

    for (L = 0; L < 3 ; L++){
        for (C = 0; C < 3 ; C++){
            mat [L][C] = 10;
        }
    }
    for (L = 0; L < 3 ; L++){
        for (C = 0 ; C < 3 ; C++){
            mat [2][1] = 20;
            printf("%d ", mat[L][C]);
    }
    printf("\n");
    }
}
