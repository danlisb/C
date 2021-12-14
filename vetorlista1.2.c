#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[10];

    for (int i = 0; i < 10; i++){
        if (i % 2 == 0) {
           vet[i] = 20;
        }
        else {
            vet[i] = 10;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%i ", vet[i]);
    }
}

