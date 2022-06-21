#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    int fatorial, multiplicador;

    printf("Digite um número para calcular o seu fatorial: ");
    scanf("%d", &multiplicador);

    for (fatorial = 1; multiplicador > 1; multiplicador--) {
        fatorial *= multiplicador;
    }

    printf("O valor do fatorial é: %d", fatorial);
    return 0;
}