#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores.*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    float eleitores, brancos, nulos, validos;

    printf("Insira a quantidade de eleitores no município: ");
    scanf("%f", &eleitores);

    printf("Insira a quantidade de votos brancos no município: ");
    scanf("%f", &brancos);

    printf("Insira a quantidade de votos nulos no município: ");
    scanf("%f", &nulos);

    printf("Insira a quantidade de votos válidos no município: ");
    scanf("%f", &validos);

    brancos = (brancos/eleitores)*100;
    nulos = (nulos/eleitores)*100;
    validos = (validos/eleitores)*100;

    printf("A porcentagem de votos brancos são: %.1f\n", brancos);
    printf("A porcentagem de votos nulos são: %.1f\n", nulos);
    printf("A porcentagem de votos válidos são: %.1f\n", validos);

return 0;
}
