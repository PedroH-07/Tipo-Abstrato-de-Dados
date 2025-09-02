#include "aluno.h"
#include <stdio.h>

#define MAX_ALUNOS 100

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int quantidade;
} Lista;

void inicializarLista(Lista* l) {
    l->quantidade = 0;
}

int inserirAluno(Lista* l, Aluno a) {
    if (l->quantidade >= MAX_ALUNOS)
        return 0;
    l->alunos[l->quantidade++] = a;
    return 1;
}

float calcularMedia(Lista l) {
    float soma = 0.0;
    if (l.quantidade == 0) return 0.0;
    for (int i = 0; i < l.quantidade; i++) {
        soma += l.alunos[i].nota;
    }
    return soma / l.quantidade;
}