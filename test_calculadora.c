#include <assert.h>
#include <stdio.h>
#include "funcion_multiplicar.c"

int main()
{
    assert(multiplicar (2,0) == 0);
    assert(multiplicar (3,6) == 18);
    assert(multiplicar (32,64) == 2048);
    printf("Teste Executado Com Sucesso");

    return 0;
}