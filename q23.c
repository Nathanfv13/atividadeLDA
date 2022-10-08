#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[6], i;

    for (i = 0; i < 6; i++)
    {
        printf("Informe o numero da posicao %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    for (i = 5; i >= 0; i--)
    {
        printf("%i ", numeros[i]);
    }

    return 0;
}
