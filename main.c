#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAMPO_NOME 50
#define TAMANHO 2
#define NOTAS 6

struct cadastro
{
    float notas[NOTAS];
    char nome[CAMPO_NOME], turma[CAMPO_NOME];
};
int main()
{
    struct cadastro Alunos[TAMANHO];
    int i, j;
    float Soma = 0, Media[TAMANHO];

    for(i = 0;i < TAMANHO; i++)
    {
        Media[i] = 0;
    }
    for(i = 0;i < TAMANHO; i++)
    {
        printf("Nome: ");scanf("\n%[^\n]",Alunos[i].nome);
        printf("Turma: ");scanf("\n%[^\n]",Alunos[i].turma);

        Soma = 0;
        for(j = 0; j < NOTAS;j++)
        {
            printf("Nota %i: ",j + 1);
            scanf("%f",&Alunos[i].notas[j]);
            Soma = Soma + Alunos[i].notas[j];
        }
        Media[i] = Soma / NOTAS;
    }

    for(i = 0;i < TAMANHO; i++)
    {
        printf("==Relatorio==\n");
        printf("Nome: %s\n",Alunos[i].nome);
        printf("Turma: %s\n",Alunos[i].turma);
        printf("Media: %f\n",Media[i]);
    }
    return 0;
}
