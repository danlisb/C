#include <stdio.h>

void IniciaVet (int *V, int qtd, int valor)
{
    int i;
    for (i = 0; i < qtd; i++)
        V[i] = valor;
}

int main()
{
    int i;
    float Vet[10];

    IniciaVet(Vet, 10, 7);
    for (i = 0; i < 10; i++)
        printf("%f ", Vet[i]);

    return 0;
}
