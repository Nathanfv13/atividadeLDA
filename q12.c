#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idadePedro, idadeJoana, idadeIsmael, maiorIdade;

    printf("Informe a idade de Pedro: ");
    scanf("%d", &idadePedro);

    printf("Informe a idade de Joana: ");
    scanf("%d", &idadeJoana);

    printf("Informe a idade de Ismael: ");
    scanf("%d", &idadeIsmael);

    if ((idadePedro > idadeIsmael) && (idadePedro > idadeJoana))
    {
        printf("Pedro e o mais velho.");
    }
    else
    {

        if (idadeIsmael > idadeJoana)
        {
            printf("Ismael e o mais velho.");
        }
        else
        {
            printf("Joana e a mais velha.");
        }
    }

    return 0;
}