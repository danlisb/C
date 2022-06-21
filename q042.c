#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char str[80] = "Nome:Marilton Aguiar;Cidade:Pelotas;Estado:RS";
    char campo[80];
    char conteudo[80];

    strcpy(campo, strtok(str, ":"));
    strcpy(conteudo, strtok(NULL, ";"));
    printf("%s -> %s\n", campo, conteudo);
    strcpy(campo, strtok(NULL, ":"));
    strcpy(conteudo, strtok(NULL, ";"));
    printf("%s -> %s\n", campo, conteudo);
    strcpy(campo, strtok(NULL, ":"));
    strcpy(conteudo, strtok(NULL, ""));
    printf("%s -> %s\n", campo, conteudo);

    return 0;
}
