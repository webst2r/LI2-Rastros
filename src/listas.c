#include <stddef.h>
#include "listas.h"

// Cria uma lista vazia
LISTA criar_lista() {
    LISTA l1;
    l1 = NULL;
    return l1;
}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *v) {
    LISTA r;

    r = malloc(sizeof(struct nodo));
    r->valor = v;
    r->prox = L;

    return r;
}


// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L) {
    LISTA cabeca;

    cabeca = malloc (sizeof(struct nodo));
    cabeca = L->valor;
}


// Devolve a cauda da lista
LISTA proximo(LISTA L){     // recebe um valor x e uma lista l e vai retornar o x como cabeca e a lista l como cauda
    LISTA cauda;

    cauda = malloc (sizeof(struct nodo));
    cauda = L->prox;

    return cauda;
}


// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda

LISTA remove_cabeca(LISTA L){
    LISTA r;
    LISTA cabeca = L->valor; // OU SERIA:
                             // OU nodo temp = cabeca;
                             // cabeca = cabeca->prox;
    if(cabeca == NULL)
        return NULL;

    L->prox->valor = r->valor;
    r->prox = L->prox->prox;

    delete cabeca;

    return r;
}




// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){
    LISTA cabeca = L->valor;

    if(cabeca = NULL) return 1;
    else 0;
}
