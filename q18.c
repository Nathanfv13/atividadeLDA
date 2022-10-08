#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float nota, soma = 0, maior = 0, menor = 10;

    for (i = 0; i < 10; i++)
    {

        printf("Informe a nota %d: ", i + 1);
        scanf("%f", &nota);

        soma = soma + nota;
        if (nota > maior)
        {
            maior = nota;
        }
        else if (nota < menor)
        {
            menor = nota;
        }
    }

    printf("A soma: %f", soma);
    printf("Media das notas: %f", soma / 10);
    printf("Maior nota: %f", maior);
    printf("Menor nota: %f", menor);

    return 0;
}
