#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char s1 [ 50 ] = "jack", s2 [ 50 ] = "jill", s3 [ 50 ], *sptr;
    printf( "%c%s ", toupper ( s1[ 0 ]), &s1 [1]);
    printf( "%s ", strcpy ( s3, s2));
    printf( "%s ", strcat( strcat( strcpy(s3, s1), " and " ), s2));
    printf( "%u ", strlen( s1) + strlen(s2));
    printf( "%u", strlen( s3 ) );

    return 0;
}
