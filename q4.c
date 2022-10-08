// Faça um programa que lê dois valores e imprime: (0,1)
// a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
// b) se o primeiro valor for maior que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
// c) se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, i;

    printf("Valor 1: ");
    scanf("%i", &valor1);

    printf("\nValor 2: ");
    scanf("%i", &valor2);

    if (valor1 == valor2)
    {
        printf("\nValores iguais.");
    }
    else if (valor1 < valor2)
    {
        // imprimir a lista de numeros do primeiro até o segundo
        for (i = valor1; i <= valor2; i++)
        {
            printf("%i ", valor1);
            valor1 = valor1 + 1;
        }
    }
    else if (valor1 > valor2)
    {
        // impimir a lista de valores do segundo até o primeiro em ordem decrescente
        for (i = valor1; i >= valor2; i--)
        {
            printf("%i ", valor1);
            valor1 = valor1 - 1;
        }
    }

    return 0;
}
