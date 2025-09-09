#ifndef ALUNO_LISTA_H
#define ALUNO_LISTA_H

#define MAX 100

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

typedef struct {
    Aluno dados[MAX];
    int qtd;
} Lista;

// Exercício 1
void alterarNota(Aluno *a, float novaNota);

// Exercício 2
void removerUltimo(Lista *l);

// Exercício 3
int buscarAlunoPorRM(Lista l, int rm);

// Exercício 4
float calcularMedia(Lista l);

// Funções auxiliares
void imprimirAluno(Aluno a);
void imprimirLista(Lista l);
void inserirAluno(Lista *l, Aluno a);

#endif