#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escreva um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    float carro_novo, fabrica, distribuidor, imposto;

    printf("Insira o custo de fábrica: ");
    scanf("%f", &fabrica);

    distribuidor = (fabrica*28/100);
    imposto = (fabrica*45/100);

    carro_novo = (fabrica+distribuidor+imposto);
    printf("O custo final do carro é: %.2f", carro_novo);

return 0;
}
