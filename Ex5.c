#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
/*Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final
deste aluno. Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5.*/

int main()
    {setlocale(LC_ALL, "Portuguese_Brazil");

    float n1,n2,n3, media;

    printf("Insira o valor da nota 1: ");
    scanf("%f", &n1);

    printf("Insira o valor da nota 2: ");
    scanf("%f", &n2);

    printf("Insira o valor da nota 3: ");
    scanf("%f", &n3);

    media = (n1*2+n2*3+n3*5)/10;

    printf("O valor da m�dia �: %.1f", media);


return 0;
}
