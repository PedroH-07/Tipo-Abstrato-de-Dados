#ifndef ALUNO_H
#define ALUNO_H

// Declaração do tipo abstrato Aluno
// Os detalhes da estrutura ficam ocultos para o usuário do TAD
typedef struct Aluno Aluno;

// Cria um novo aluno com nome e nota inicial
Aluno* criarAluno(const char* nome, float nota);

// Altera a nota do aluno
void alterarNota(Aluno* a, float novaNota);

// Imprime os dados do aluno
void imprimirAluno(const Aluno* a);

// Libera a memória alocada para o aluno
void destruirAluno(Aluno* a);

#endif