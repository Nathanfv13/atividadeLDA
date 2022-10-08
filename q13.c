#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, i;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Numero invalido");
        return 1;
    }

    for (i = numero; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%i ", i);
        }
    }

    return 0;
}