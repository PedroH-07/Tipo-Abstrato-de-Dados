#include <stdio.h>
#include "aluno.h"

int main() {
    // Cria um aluno chamado "Pedro" com nota inicial 7.5
    Aluno* aluno = criarAluno("Pedro", 7.5);

    // Imprime os dados do aluno antes de alterar a nota
    printf("Antes: ");
    imprimirAluno(aluno);

    // Altera a nota do aluno para 9.0
    alterarNota(aluno, 9.0);

    // Imprime os dados do aluno após a alteração da nota
    printf("Depois: ");
    imprimirAluno(aluno);

    // Libera a memória alocada para o aluno
    destruirAluno(aluno);
    return 0;
}