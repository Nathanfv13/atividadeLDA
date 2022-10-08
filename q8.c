// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j;

    printf("Informe o tamanho maximo: ");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 == 0)
    {
        printf("Numero nao é impar.\n");
        return 1;
    }
    else
    {
        for (i = 0; i <= (n / 2) + 1; i++)
        {
            for (j = i + 1; j <= n - i; j++)
            {
                printf("%d ", j);
            }

            printf("\n");

            for (j = 0; j < (i + 1) * 2; j++)
                printf(" ");
        }
    }

    return 0;
}