#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o
n�mero de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um
representa em rela��o ao total de eleitores.*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    float eleitores, brancos, nulos, validos;

    printf("Insira a quantidade de eleitores no munic�pio: ");
    scanf("%f", &eleitores);

    printf("Insira a quantidade de votos brancos no munic�pio: ");
    scanf("%f", &brancos);

    printf("Insira a quantidade de votos nulos no munic�pio: ");
    scanf("%f", &nulos);

    printf("Insira a quantidade de votos v�lidos no munic�pio: ");
    scanf("%f", &validos);

    brancos = (brancos/eleitores)*100;
    nulos = (nulos/eleitores)*100;
    validos = (validos/eleitores)*100;

    printf("A porcentagem de votos brancos s�o: %.1f\n", brancos);
    printf("A porcentagem de votos nulos s�o: %.1f\n", nulos);
    printf("A porcentagem de votos v�lidos s�o: %.1f\n", validos);

return 0;
}
