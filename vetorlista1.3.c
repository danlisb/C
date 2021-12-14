#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do vetor %i: ", i);
        scanf("%d", &vet[i]);
        if (vet[i] < 0) {
            vet[i] = 0;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%i ", vet[i]);
    }
}
