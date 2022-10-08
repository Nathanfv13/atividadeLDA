
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat, numero;
    printf("Numero: ");
    scanf("%d", &numero);

    for (fat = 1; numero > 1; numero = numero - 1)
    {
        fat = fat * numero;
    }

    printf("Fatorial: %d ", fat);
    return 0;
}