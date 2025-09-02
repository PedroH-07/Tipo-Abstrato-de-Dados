#include <stdio.h>
#include <string.h>
#include "aluno.h"

// Declare as funções e struct do lista.c
#define MAX_ALUNOS 100
typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int quantidade;
} Lista;

void inicializarLista(Lista* l);
int inserirAluno(Lista* l, Aluno a);
float calcularMedia(Lista l);

int main() {
    Lista turma;
    inicializarLista(&turma);

    Aluno a1 = {1, "Ana", 8.0};
    Aluno a2 = {2, "Bruno", 7.5};
    Aluno a3 = {3, "Carlos", 9.0};

    inserirAluno(&turma, a1);
    inserirAluno(&turma, a2);
    inserirAluno(&turma, a3);

    float media = calcularMedia(turma);
    printf("Média das notas da turma: %.2f\n", media);

    return 0;
}