#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*O custo de um carro novo ao consumidor � a soma do custo de f�brica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escreva um
algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao
consumidor*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    float carro_novo, fabrica, distribuidor, imposto;

    printf("Insira o custo de f�brica: ");
    scanf("%f", &fabrica);

    distribuidor = (fabrica*28/100);
    imposto = (fabrica*45/100);

    carro_novo = (fabrica+distribuidor+imposto);
    printf("O custo final do carro �: %.2f", carro_novo);

return 0;
}
