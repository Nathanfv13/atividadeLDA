#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10], i, soma = 0, subtracao = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero inteiro %i", i + 1);
        scanf("%i", &numeros[i]);

        if (i % 2 != 0)
        {
            subtracao = subtracao - numeros[i];
        }
        else
        {
            soma = soma + numeros[i];
        }
    }

    printf("Soma dos numeros nos indices pares: %i", soma);
    printf("Subtracao dos numeros nos indices impares: %i", subtracao);

    return 0;
}
