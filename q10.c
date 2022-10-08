
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);
    printf("\n");

    if (numero % 2 == 0)
    {
        printf("Numero Par!\n");
        if (numero > 15) {
            printf("\nNumero maior que 15.");
        } 
    }
    else
    {
        printf("Numero Impar!");
        if (numero < 50) {
            printf("\nNumero menor que 50.");
        }
    }

    return 0;
}