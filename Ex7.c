#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");

int inteiro;

printf("Digite um n�mero inteiro: ");
scanf("%i",&inteiro);

if (inteiro %2 == 0){
    printf("� um n�mero par.\n");
}
else{
    printf("� um n�mero �mpar.\n");
}
if (inteiro > 0){
    printf("� um n�mero positivo.\n");
}
if(inteiro < 0){
    printf("� um n�mero negativo.\n");
}
if(inteiro == 0){
    printf("O n�mero � zero.\n");
}

return 0;
}
