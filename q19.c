#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float vetor[5])
{
    float maior;
    int i;

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int main()
{

    float numeros[5], maior;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    maior = maiorNumero(numeros);

    printf("O maior numero: %.2f", maiorNumero);
    
    return 0;
}
