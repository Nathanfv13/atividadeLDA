#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qtdAlunos, qtdAlunas;

    printf("Informe a quantidade de alunas: ");
    scanf("%i", &qtdAlunas);

    printf("Informe a quantidade de alunos: ");
    scanf("%i", &qtdAlunos);

    if (qtdAlunos == qtdAlunas)
    {
        printf("A quantidade de alunos e alunas sao iguais!");
    }
    else if (qtdAlunos > qtdAlunas)
    {
        printf("A turma tem mais alunos!");
    }
    else
    {
        printf("A turma tem mais alunas!");
        printf("\nO total de alunos: %d", qtdAlunos);
    }

    return 0;
}