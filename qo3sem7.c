#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

enum numeros {
    um, dois, tres, quatro, cinco, seis=6, sete, oito, nove, dez
};

int main()
{
    printf("%d %d %d %d", um, dez, (cinco + quatro), (sete + um) );
    return 0;
}
