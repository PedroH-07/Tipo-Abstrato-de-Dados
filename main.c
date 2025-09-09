#include <stdio.h>
#include "aluno.h"

int main() {
    // Exercício 1
    printf("\n--- Exercicio 1 ---\n");
    Aluno aluno1 = {123, "Joao", 7.5};
    printf("Antes da alteração: ");
    imprimirAluno(aluno1);
    alterarNota(&aluno1, 9.0);
    printf("Depois da alteração: ");
    imprimirAluno(aluno1);

    // Exercício 2
    printf("\n--- Exercicio 2 ---\n");
    Lista lista;
    lista.qtd = 0;
    inserirAluno(&lista, (Aluno){101, "Maria", 8.0});
    inserirAluno(&lista, (Aluno){102, "Carlos", 6.5});
    inserirAluno(&lista, (Aluno){103, "Ana", 9.2});
    printf("Antes de remover o último:\n");
    imprimirLista(lista);
    removerUltimo(&lista);
    printf("Depois de remover o último:\n");
    imprimirLista(lista);

}