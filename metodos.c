#include "stdlib.h"
#include "stdio.h"
#include "metodos.h"

struct lista{
    struct lista *ant;
    struct lista *prox;
    int info;
};

typedef struct lista Lista;

Lista* cria_lista() {
    return NULL;
}
Lista *inserir_inicio(Lista *l, int valor) {
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = valor;
    if(l == NULL) {
        l = novo;
        novo->prox = novo;
    }
    else {
        Lista *aux = l;
        while (aux->prox != l) {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = l;
        l = novo;
    }
    return l;
}

void imprime(Lista *l) {
    Lista *aux = l;
    do {
        printf("%d ", aux->info);
        aux = aux->prox;
    } while(aux != l);


}

Lista *remover(Lista *l, int valor) {
    Lista *novo = l;
    if (novo->info == valor) {
        //remover inicio
    }
    Lista *ant = novo;
    novo = novo->prox;
    while(novo != l && novo->info != valor) {
        ant = novo;
        novo = novo->prox;
    }
    if(novo == l)
        return 0;
    ant->prox = novo->prox;
    free(novo);
    return l;
}