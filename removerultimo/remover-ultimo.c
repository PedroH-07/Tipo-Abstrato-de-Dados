#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int matricula; 
    char nome[50]; 
    float nota;           
} Aluno;

typedef struct {
    Aluno dados[MAX];
    int n; 
} Lista;

void removerUltimo(Lista *l) {
    if (l == NULL || l->n == 0)
        return;
    l->n--;
}

int main() {
    Lista minhaLista;
    minhaLista.n = 0; 

    minhaLista.dados[0].matricula = 563268;
    strcpy(minhaLista.dados[0].nome, "Pedro");
    minhaLista.dados[0].nota = 9.4;
    minhaLista.n++;
    
    minhaLista.dados[1].matricula = 566263;
    strcpy(minhaLista.dados[1].nome, "Rafael");
    minhaLista.dados[1].nota = 9.3;
    minhaLista.n++;

    minhaLista.dados[2].matricula = 565462;
    strcpy(minhaLista.dados[2].nome, "Gabriel");
    minhaLista.dados[2].nota = 9.2;
    minhaLista.n++;

    removerUltimo(&minhaLista);

    for (int i = 0; i < minhaLista.n; i++) {
        printf("Matricula: %d, Nome: %s, Nota: %.1f\n",
        minhaLista.dados[i].matricula, 
        minhaLista.dados[i].nome, 
        minhaLista.dados[i].nota);
    }

    return 0;
}
