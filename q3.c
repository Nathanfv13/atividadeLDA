// Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal.

#include <stdio.h>
#include <stdlib.h>

void converterDecimalParaHexa(int num)
{

    int i, j;
    int quociente;

    i = 0;

    int resto[i];

    quociente = num / 16;
    resto[i] = num % 16;

    while (quociente >= 16)
    {
        i++;
        resto[i] = quociente % 16;
        quociente = quociente / 16;
    }
    i++;
    resto[i] = quociente;

    printf("Em Hexadecimal: ");
    for (; i >= 0; i--)

        if (resto[i] >= 10)
            switch (resto[i])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
        else
            printf("%d", resto[i]);

    printf("\n\n");
}

void converterDecimalParaOctal(int decimal)
{
    int octal = 0;
    int resto, i = 1;
    while (decimal != 0)
    {
        resto = decimal % 8;
        decimal = decimal / 8;
        octal = octal + (resto * i);
        i = i * 10;
    }

    printf("Em Octal: %d\n", octal);
}

int main()
{
    int dec;

    printf("Informe um numero decimal: ");
    scanf("%d", &dec);

    converterDecimalParaOctal(dec);
    converterDecimalParaHexa(dec);

    return 0;
}