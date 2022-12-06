#include "stdio.h"
#include "metodos.h"

int main() {
    Lista *l;
    l = cria_lista();
    l = inserir_inicio(l,10);
    l = inserir_inicio(l,11);
    l = inserir_inicio(l,12);
    l = inserir_inicio(l,13);
    remover(l,10);
    imprime(l);
    return 1;
}