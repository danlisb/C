#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, s2;

    int vet[5];

    for (i= 0; i < 5; i++){
        printf("Digite vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    s2 = 0;
    for (i = 0; i < 5; i++) {
        s2 = s2 + vet[i];
    }
    for (i = 0; i < 5; i++){
        printf("vet[%d]: %d\n", i, vet[i]);
    }
    printf("Soma: %d", s2);
}
