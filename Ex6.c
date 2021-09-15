#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

int n1, n2, n3, media;

printf("Digite a maior nota: ");
scanf("%i",&n1);

printf("Digite a nota 2: ");
scanf("%i",&n2);

printf("Digite a nota 3: ");
scanf("%i",&n3);

media = ((4*n1+3*n2+3*n3)/10);

if (media>=5){
    printf("Aprovado\n");
}
else{
    printf("Reprovado\n");
}

return 0;
}
