#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

// Estrutura interna do Aluno (oculta do usuário do TAD)
struct Aluno {
    char nome[100]; // Nome do aluno
    float nota;     // Nota do aluno
};

// Cria um novo aluno com nome e nota inicial
Aluno* criarAluno(const char* nome, float nota) {
    Aluno* a = (Aluno*)malloc(sizeof(Aluno)); // Aloca memória para o aluno
    if (a != NULL) {
        strcpy(a->nome, nome); // Copia o nome
        a->nota = nota;        // Define a nota
    }
    return a;
}

// Altera a nota do aluno
void alterarNota(Aluno* a, float novaNota) {
    if (a != NULL) {
        a->nota = novaNota;
    }
}

// Imprime os dados do aluno
void imprimirAluno(const Aluno* a) {
    if (a != NULL) {
        printf("%s - Nota: %.2f\n", a->nome, a->nota);
    }
}

// Libera a memória alocada para o aluno
void destruirAluno(Aluno* a) {
    free(a);
}
void imprimirAluno(const Aluno* a) {
    if (a != NULL) {
        printf("%s - Nota: %.2f\n", a->nome, a->nota);
    }
}

void destruirAluno(Aluno* a) {
    free(a);
}
