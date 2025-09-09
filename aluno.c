
#include <stdio.h>
#include <string.h>
#include "aluno.h"

// Exercício 1
void alterarNota(Aluno *a, float novaNota) {
    if (a) a->nota = novaNota;
}

// Exercício 2
void removerUltimo(Lista *l) {
    if (l && l->qtd > 0) {
        l->qtd--;
    }
}

// Exercício 3
int buscarAlunoPorRM(Lista l, int rm) {
    for (int i = 0; i < l.qtd; i++) {
        if (l.dados[i].rm == rm)
            return i;
    }
    return -1;
}

// Exercício 4
float calcularMedia(Lista l) {
    if (l.qtd == 0) return 0.0;
    float soma = 0;
    for (int i = 0; i < l.qtd; i++) {
        soma += l.dados[i].nota;
    }
    return soma / l.qtd;
}

// Funções auxiliares
void imprimirAluno(Aluno a) {
    printf("RM: %d, Nome: %s, Nota: %.2f\n", a.rm, a.nome, a.nota);
}

void imprimirLista(Lista l) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < l.qtd; i++) {
        imprimirAluno(l.dados[i]);
    }
}

void inserirAluno(Lista *l, Aluno a) {
    if (l->qtd < MAX) {
        l->dados[l->qtd++] = a;
    }
}