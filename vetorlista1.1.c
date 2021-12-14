#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[10];
    int total = 0;

    for (int i = 0; i < 10; i++){
        total += 10;
        vet[i] = total;
    }
    for (int i = 0; i < 10; i++){
        printf("%i ", vet[i]);
    }
}
